/*
 *
 * TezosLikeOperation
 *
 * Created by El Khalil Bellakrid on 27/04/2019.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#pragma once

#include <tezos/api/TezosLikeOperation.hpp>
#include <tezos/api/TezosLikeTransaction.hpp>
#include <tezos/explorers/TezosLikeBlockchainExplorer.hpp>

#include <core/operation/Operation.hpp>
#include <core/wallet/AbstractWallet.hpp>

namespace ledger {
    namespace core {
        class TezosLikeOperation : public api::TezosLikeOperation, public Operation {
        public:
            TezosLikeOperation() = default;

            TezosLikeOperation(
                const std::shared_ptr<const AbstractWallet>& wallet,
                TezosLikeBlockchainExplorerTransaction const& tx);
            
            std::shared_ptr<api::TezosLikeTransaction> getTransaction() const override;

            void refreshUid() override;            
            bool isComplete() override;

            const TezosLikeBlockchainExplorerTransaction& getExplorerTransaction() const;
            TezosLikeBlockchainExplorerTransaction& getExplorerTransaction();            
            void setExplorerTransaction(TezosLikeBlockchainExplorerTransaction const& tx);
        private:
            std::shared_ptr<api::TezosLikeTransaction> _tx;
            TezosLikeBlockchainExplorerTransaction _explorerTx;
        };
    }
}