// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKEOUTPUT_HPP
#define DJINNI_GENERATED_BITCOINLIKEOUTPUT_HPP

#include "../utils/optional.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class Amount;
class BitcoinLikeScript;
class DerivationPath;

/** Class representing Bitcoin outputs. */
class LIBCORE_EXPORT BitcoinLikeOutput {
public:
    virtual ~BitcoinLikeOutput() {}

    /**
     * Get transaction hash in which output was 'created'.
     * @return String, transaction hash containing output
     */
    virtual std::string getTransactionHash() = 0;

    /**
     * Get index of output in list of all outputs contained in same transaction.
     * @return 32 bits integer, index of output
     */
    virtual int32_t getOutputIndex() = 0;

    /**
     * Get amount of output.
     * @return Amount object, amount of output
     */
    virtual std::shared_ptr<Amount> getValue() = 0;

    /**
     * Get script (witness script) cryptographic puzzle that determines the conditions to spend the output.
     * @return in Bytes (variable size depending on type of script P2PKH, P2SH), locking script to spend UTXO
     */
    virtual std::vector<uint8_t> getScript() = 0;

    virtual std::shared_ptr<BitcoinLikeScript> parseScript() = 0;

    /**
     * Get address that spent the output.
     * @return Optional String, address that spent
     */
    virtual std::experimental::optional<std::string> getAddress() = 0;

    virtual std::shared_ptr<DerivationPath> getDerivationPath() = 0;

    virtual std::experimental::optional<int64_t> getBlockHeight() = 0;

    /**
     * Check if the transaction (which created this output) is replaceable (RBF).
     * An output can be replaceable if the transaction has at least one RBF input
     * and if the transaction is not a block.
     * @return true if the output is replaceable, false otherwise
     */
    virtual bool isReplaceable() const = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_BITCOINLIKEOUTPUT_HPP
