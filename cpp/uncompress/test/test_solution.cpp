#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    std::string s = "2c3a1t";
    const std::string result = solution.uncompress(s);
    const std::string expected = "ccaaat";
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    std::string s = "4s2b";
    const std::string result = solution.uncompress(s);
    const std::string expected = "ssssbb";
    EXPECT_EQ(result, expected);
}


TEST_F(SolutionTest, TestCaseThree) {
    std::string s = "2p1o5p";
    const std::string result = solution.uncompress(s);
    const std::string expected = "ppoppppp";
    EXPECT_EQ(result, expected);
}


TEST_F(SolutionTest, TestCaseFour) {
    std::string s = "3n12e2z";
    const std::string result = solution.uncompress(s);
    const std::string expected = "nnneeeeeeeeeeeezz";
    EXPECT_EQ(result, expected);
}


TEST_F(SolutionTest, TestCaseFive) {
    std::string s = "127y";
    const std::string result = solution.uncompress(s);
    const std::string expected = "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy";
    EXPECT_EQ(result, expected);
}

