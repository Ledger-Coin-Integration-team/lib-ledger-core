#!/usr/bin/env bash
#
# Generate library bindings with djinni.
# Invocate with TRACE=1 as environment variable to set debug compilation.

set -e

usage() {
  echo -e $1
  exit $2
}

if [[ $TRACE ]] ; then
    echo "Debug compilation enabled"
    trace="true";
else
    trace="false";
fi


function generate_npm_interface {
    IDL_PATH=$1
    PROJECT_NAME=${IDL_PATH%/idl/*}
    CURRENCY_NAME=${PROJECT_NAME##*-}
    API_DIR=$PROJECT_NAME/inc/$CURRENCY_NAME/api
    CPP_JNI_DIR=$PROJECT_NAME/inc/$CURRENCY_NAME/jni
    NODE_DIR=$PROJECT_NAME/bindings/node
    NODE_SRC_DIR=$NODE_DIR/src
    NODE_PKG_NAME=ledgercore
    BUILD=$PROJECT_NAME/build

    echo -e "Generating $PROJECT_NAME ($CURRENCY_NAME) JS binding code"

    # recreate node directory
    rm -rf $NODE_SRC_DIR
    mkdir -p $NODE_SRC_DIR

    ./djinni/src/run \
        --idl $IDL_PATH \
        --cpp-out $API_DIR \
        --cpp-namespace ledger::core::api \
        --cpp-optional-template std::experimental::optional \
        --cpp-optional-header "\"utils/Optional.hpp\"" \
        --node-out $NODE_SRC_DIR \
        --node-type-prefix NJS \
        --node-include-cpp "../include/$CURRENCY_NAME" \
        --node-package $NODE_PKG_NAME \
        --export-header-name libcore_export \
        --trace $trace

    # copy include files
    echo "Copying header files…"
    rm -rf $NODE_DIR/include/$CURRENCY_NAME
    mkdir -p $NODE_DIR/include/$CURRENCY_NAME
    cp -r $API_DIR/* $NODE_DIR/include/$CURRENCY_NAME

    # copy util files
    echo "Copying utils files…"
    rm -rf $NODE_DIR/include/$CURRENCY_NAME/utils
    mkdir -p $NODE_DIR/include/$CURRENCY_NAME/utils
    cp -r ledger-core/inc/core/utils/Optional.hpp $NODE_DIR/include/$CURRENCY_NAME/utils
    cp -r ledger-core/inc/core/LibCoreExport.hpp $NODE_DIR/include/$CURRENCY_NAME

    # copy lib files
    echo "Copying lib files"
    rm -rf $NODE_DIR/lib
    mkdir -p $NODE_DIR/lib

    # copy dynamic library
    echo "Copying the dynamic library"
    cp $BUILD/src/lib$PROJECT_NAME.* $NODE_DIR/lib

    # create tmp folder if needed
    if [ ! -e $NODE_DIR/js/tmp ]; then
      mkdir -p $NODE_DIR/js/tmp
    fi
}

case "$2" in
  "npm")
    generate_npm_interface $1
    ;;

  *)
    echo "unknown packaging system"
    exit 1
    ;;
esac
