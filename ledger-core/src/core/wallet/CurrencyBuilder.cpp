/*
 *
 * CurrencyBuilder
 * ledger-core
 *
 * Created by Pierre Pollastri on 12/05/2017.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Ledger
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

#include <core/api/Wallet.hpp>
#include <core/wallet/CurrencyBuilder.hpp>

namespace ledger {
    namespace core {
        CurrencyBuilder::CurrencyBuilder(const std::string name) {
            _name = name;
        }

        CurrencyBuilder &CurrencyBuilder::units(std::vector<api::CurrencyUnit> units) {
            _units = units;
            return *this;
        }

        CurrencyBuilder::operator api::Currency() const {
            return api::Currency(_name, _coinType, _paymentUriScheme, _units);
        }

        CurrencyBuilder &CurrencyBuilder::bip44(int coinType) {
            _coinType = coinType;
            return *this;
        }

        CurrencyBuilder &CurrencyBuilder::paymentUri(const std::string &scheme) {
            _paymentUriScheme = scheme;
            return *this;
        }

        CurrencyBuilder &CurrencyBuilder::unit(const std::string &name, int magnitude, const std::string &code) {
            api::CurrencyUnit u(name, code, (int32_t) magnitude);
            _units.push_back(u);
            return *this;
        }
    }
}
