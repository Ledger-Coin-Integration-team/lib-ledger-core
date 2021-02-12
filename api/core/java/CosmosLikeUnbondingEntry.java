// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

package co.ledger.core;

import java.util.Date;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class CosmosLikeUnbondingEntry {
    /** Block height of the unbonding request */
    public abstract BigInt getCreationHeight();

    /** Timestamp of the unbonding completion */
    public abstract Date getCompletionTime();

    /** Balance requested to unbond */
    public abstract BigInt getInitialBalance();

    /** Current amount coming back (i.e. less than initialBalance if slashed) */
    public abstract BigInt getBalance();

    private static final class CppProxy extends CosmosLikeUnbondingEntry
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
        public BigInt getCreationHeight()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getCreationHeight(this.nativeRef);
        }
        private native BigInt native_getCreationHeight(long _nativeRef);

        @Override
        public Date getCompletionTime()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getCompletionTime(this.nativeRef);
        }
        private native Date native_getCompletionTime(long _nativeRef);

        @Override
        public BigInt getInitialBalance()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getInitialBalance(this.nativeRef);
        }
        private native BigInt native_getInitialBalance(long _nativeRef);

        @Override
        public BigInt getBalance()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getBalance(this.nativeRef);
        }
        private native BigInt native_getBalance(long _nativeRef);
    }
}
