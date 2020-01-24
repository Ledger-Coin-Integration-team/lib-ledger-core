/*
 *
 * ERC20LikeTransaction
 *
 * Created by El Khalil Bellakrid on 26/08/2018.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ledger
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

#include <core/api/OperationType.hpp>
#include <core/math/BigInt.hpp>
#include <core/operation/Operation.hpp>

#include <ethereum/api/ERC20LikeOperation.hpp>
#include <ethereum/api/ERC20Token.hpp>
#include <ethereum/explorers/EthereumLikeBlockchainExplorer.hpp>
#include <ethereum/operations/EthereumLikeOperation.hpp>

namespace ledger {
    namespace core {
        class ERC20LikeOperation : virtual public api::ERC20LikeOperation, virtual public Operation {
        public:
            ERC20LikeOperation(
                std::shared_ptr<AbstractAccount> const& account
            );

            ERC20LikeOperation(
                const std::string &accountAddress,
                const std::string &operationUid,
                const EthereumLikeOperation &operation,
                const ERC20Transaction &erc20Tx,
                const api::Currency &currency
            );

            ERC20LikeOperation() = default;

            api::OperationType getOperationType() override {
                return Operation::getOperationType();
            }

            optional<int64_t> getBlockHeight() override {
                return Operation::getBlockHeight();
            }

            std::string getHash() override;
            std::shared_ptr<api::BigInt> getNonce() override;
            std::shared_ptr<api::BigInt> getGasPrice() override;
            std::shared_ptr<api::BigInt> getGasLimit() override;
            std::shared_ptr<api::BigInt> getUsedGas() override;
            std::string getSender() override;
            std::string getReceiver() override;
            std::shared_ptr<api::BigInt> getValue() override ;
            std::vector<uint8_t> getData() override ;
            std::chrono::system_clock::time_point getTime() override;
            std::string getOperationUid();
            std::string getETHOperationUid();
            int32_t getStatus() override ;

            ERC20LikeOperation &setHash(const std::string &hash) {
                _hash = hash;
                return *this;
            };

            ERC20LikeOperation &setNonce(const BigInt &nonce) {
                _nonce = std::make_shared<BigInt>(nonce);
                return *this;
            };

            ERC20LikeOperation &setGasPrice(const BigInt &gasPrice) {
                _gasPrice = std::make_shared<BigInt>(gasPrice);
                return *this;
            };

            ERC20LikeOperation &setGasLimit(const BigInt &gasLimit) {
                _gasLimit = std::make_shared<BigInt>(gasLimit);
                return *this;
            };

            ERC20LikeOperation &setUsedGas(const BigInt &usedGas) {
                _gasUsed = std::make_shared<BigInt>(usedGas);
                return *this;
            };

            ERC20LikeOperation &setSender(const std::string &sender) {
                senders = { sender };
                return *this;
            };

            ERC20LikeOperation &setReceiver(const std::string &receiver) {
                recipients = { receiver };
                return *this;
            };

            ERC20LikeOperation &setValue(const BigInt &value) {
                amount = value;
                return *this;
            };

            ERC20LikeOperation &setData(const std::vector<uint8_t> &data) {
                _data = data;
                return *this;
            };

            ERC20LikeOperation &setTime(const std::chrono::system_clock::time_point& time) {
                date = time;
                return *this;
            };

            ERC20LikeOperation &setOperationType(api::OperationType type) {
                this->type = type;
                return *this;
            };

            ERC20LikeOperation &setOperationUid(const std::string &operationUid) {
                uid = operationUid;
                return *this;
            };

            ERC20LikeOperation &setETHOperationUid(const std::string &ethOperationUid) {
                _ethUidOperation = ethOperationUid;
                return *this;
            };

            ERC20LikeOperation &setStatus(int32_t status) {
                _status = status;
                return *this;
            };

            ERC20LikeOperation &setBlockHeight(int64_t blockHeight) {
                if (!block.hasValue()) {
                    block = api::Block();
                }

                block->height = blockHeight;

                return *this;
            }

            void refreshUid(std::string const&) override;

        private:
            std::string _ethUidOperation;
            std::string _hash;
            std::shared_ptr<api::BigInt> _nonce;
            std::shared_ptr<api::BigInt> _gasPrice;
            std::shared_ptr<api::BigInt> _gasLimit;
            std::shared_ptr<api::BigInt> _gasUsed;
            std::vector<uint8_t> _data;
            int32_t _status;
        };
    }
}
