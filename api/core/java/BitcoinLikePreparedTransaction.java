// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

package co.ledger.core;

import java.util.ArrayList;

/** Structure representing a prepared bitcoin transaction (ready to be used with device). */
public final class BitcoinLikePreparedTransaction {


    /*package*/ final int version;

    /*package*/ final ArrayList<BitcoinLikeOutput> inputs;

    /*package*/ final ArrayList<String> paths;

    /*package*/ final ArrayList<BitcoinLikeOutput> outputs;

    /*package*/ final int lockTime;

    public BitcoinLikePreparedTransaction(
            int version,
            ArrayList<BitcoinLikeOutput> inputs,
            ArrayList<String> paths,
            ArrayList<BitcoinLikeOutput> outputs,
            int lockTime) {
        this.version = version;
        this.inputs = inputs;
        this.paths = paths;
        this.outputs = outputs;
        this.lockTime = lockTime;
    }

    /** 32-bit integer representing version. */
    public int getVersion() {
        return version;
    }

    /** List of BitcoinLikeInput objects, inputs aggregateed by transaction. */
    public ArrayList<BitcoinLikeOutput> getInputs() {
        return inputs;
    }

    /** List of stringsm paths to account creating transaction. */
    public ArrayList<String> getPaths() {
        return paths;
    }

    /** List of BitcoinLikeOutput objects, outputs aggregateed by transaction. */
    public ArrayList<BitcoinLikeOutput> getOutputs() {
        return outputs;
    }

    /** 32-bit integer, block height after which transaction can be accepted. */
    public int getLockTime() {
        return lockTime;
    }

    @Override
    public String toString() {
        return "BitcoinLikePreparedTransaction{" +
                "version=" + version +
                "," + "inputs=" + inputs +
                "," + "paths=" + paths +
                "," + "outputs=" + outputs +
                "," + "lockTime=" + lockTime +
        "}";
    }

}
