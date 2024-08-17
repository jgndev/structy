#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    std::string input = "ccaaatsss";
    const std::string expected = "2c3at3s";
    const std::string result = solution.compress(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    std::string input = "ssssbbz";
    const std::string expected = "4s2bz";
    const std::string result = solution.compress(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    std::string input = "ppoppppp";
    const std::string expected = "2po5p";
    const std::string result = solution.compress(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
    std::string input = "nnneeeeeeeeeeeezz";
    const std::string expected = "3n12e2z";
    const std::string result = solution.compress(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
    std::string input = "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy";
    const std::string expected = "127y";
    const std::string result = solution.compress(input);
    EXPECT_EQ(result, expected);
}
