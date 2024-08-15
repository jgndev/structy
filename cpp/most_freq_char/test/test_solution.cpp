#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    std::string input = "bookkeeper";
    constexpr char expected = 'e';
    const char result = solution.most_freq_char(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    std::string input = "david";
    constexpr char expected = 'd';
    const char result = solution.most_freq_char(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    std::string input = "abby";
    constexpr char expected = 'b';
    const char result = solution.most_freq_char(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
    std::string input = "mississippi";
    constexpr char expected = 'i';
    const char result = solution.most_freq_char(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
    const std::string input = "potato";
    constexpr char expected = 'o';
    const char result = solution.most_freq_char(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseSix) {
    std::string input = "eleventennine";
    constexpr char expected = 'e';
    const char result = solution.most_freq_char(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseSeven) {
    std::string input = "riverbed";
    constexpr char expected = 'r';
    const char result = solution.most_freq_char(input);
    EXPECT_EQ(result, expected);
}
