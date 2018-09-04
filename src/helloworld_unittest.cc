// Copyright 2018, Allan Knight.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Allan Knight nor the names of other
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

// A unit tester for EX01-HelloWorld in CSV13 at Ventura College.
//
// Author: aknight@vcccd.edu (Allan Knight)


// Includes for google test and the unit under test.

#include <climits>
#include <cstdint>
#include <fstream>

#include "gtest/gtest.h"

namespace {

// Tests edu::sbcc:cs140::HelloWorld::greetWorld().

using namespace ::testing_internal;

class HelloWorldTest : public ::testing::Test {
protected:
    static const uint64_t MAX_TESTED_SCORE = 20;
    static const uint64_t MAX_OVERALL_SCORE = 25;
    static uint64_t _testScore;

protected:
    static void TearDownTestCase() {
      if (_testScore == MAX_TESTED_SCORE) {
        std::cout << std::endl << "Your unit test score is "
                               << _testScore << " out of "
                               << MAX_TESTED_SCORE << std::endl;
      } else {
        std::cout << "Your unit test score is "
                  << _testScore << " out of "
                  << MAX_TESTED_SCORE << " ("<< (int)(_testScore - MAX_TESTED_SCORE)
                  << ")" << std::endl;
      }

      std::cout << "The assignment is worth a total of " << MAX_OVERALL_SCORE
                << " where the remainder of 5 points" << std::endl;
      std::cout << "comes from grading related to documentation, algorithms, and other"
                << std::endl;
      std::cout << "criteria." << std::endl << std::endl;
    }
};

uint64_t HelloWorldTest::_testScore = 0;

// Tests returned string of greetWorld().
TEST_F(HelloWorldTest, Positive) {
  // This test is named "Positive", and belongs to the "HelloWorld"
  // test case.

#ifdef WIN32
  std::system("HelloWorld > ./test.txt");
#else 
  std::system("./HelloWorld > ./test.txt");
#endif
  char buf[] = { '\0','\0' ,'\0' ,'\0' ,'\0' ,'\0' ,'\0' ,'\0' ,'\0' ,'\0' ,'\0' ,'\0' ,'\0', '\0', '\0' };
  std::ifstream("./test.txt").rdbuf()->sgetn(buf, 14);
  ASSERT_STREQ("Hello, World!\n", buf);

  _testScore += 20;
}

}  // namespace

