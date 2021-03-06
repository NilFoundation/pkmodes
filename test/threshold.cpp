//---------------------------------------------------------------------------//
// Copyright (c) 2018-2020 Mikhail Komarov <nemo@nil.foundation>
//
// MIT License
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//---------------------------------------------------------------------------//

#define BOOST_TEST_MODULE threshold_test

#include <nil/crypto3/pubkey/modes/algorithm/agree.hpp>
#include <nil/crypto3/pubkey/modes/algorithm/decrypt.hpp>
#include <nil/crypto3/pubkey/modes/algorithm/encrypt.hpp>
#include <nil/crypto3/pubkey/modes/algorithm/kem_decrypt.hpp>
#include <nil/crypto3/pubkey/modes/algorithm/kem_encrypt.hpp>
#include <nil/crypto3/pubkey/modes/algorithm/pubkey.hpp>
#include <nil/crypto3/pubkey/modes/algorithm/recover.hpp>
#include <nil/crypto3/pubkey/modes/algorithm/sign.hpp>
#include <nil/crypto3/pubkey/modes/algorithm/verify.hpp>

#include <nil/crypto3/pubkey/modes/threshold.hpp>

#include <boost/test/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>

#include <iostream>
#include <string>
#include <cassert>
#include <unordered_map>

BOOST_AUTO_TEST_SUITE(threshold_hash_test_suite)

BOOST_AUTO_TEST_CASE(adler_iterator_range_hash) {
}

BOOST_AUTO_TEST_SUITE_END()