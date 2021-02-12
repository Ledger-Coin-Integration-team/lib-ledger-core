// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

package co.ledger.core;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class RippleLikeExtendedPublicKey {
    public abstract RippleLikeAddress derive(String path);

    public abstract byte[] derivePublicKey(String path);

    public abstract byte[] deriveHash160(String path);

    public abstract String toBase58();

    public abstract String getRootPath();

    private static final class CppProxy extends RippleLikeExtendedPublicKey
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public RippleLikeAddress derive(String path)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_derive(this.nativeRef, path);
        }
        private native RippleLikeAddress native_derive(long _nativeRef, String path);

        @Override
        public byte[] derivePublicKey(String path)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_derivePublicKey(this.nativeRef, path);
        }
        private native byte[] native_derivePublicKey(long _nativeRef, String path);

        @Override
        public byte[] deriveHash160(String path)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_deriveHash160(this.nativeRef, path);
        }
        private native byte[] native_deriveHash160(long _nativeRef, String path);

        @Override
        public String toBase58()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_toBase58(this.nativeRef);
        }
        private native String native_toBase58(long _nativeRef);

        @Override
        public String getRootPath()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getRootPath(this.nativeRef);
        }
        private native String native_getRootPath(long _nativeRef);
    }
}
