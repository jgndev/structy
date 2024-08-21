//
// Created by Jeremy Novak on 8/14/24.
//
#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  const std::vector<std::string> input = {"goat", "cat", "purple"};
  const int expected = 13;
  const int result = solution.sum_of_lengths(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  const std::vector<std::string> input = {"bike", "at", "pencils", "phone"};
  const int expected = 18;
  const int result = solution.sum_of_lengths(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  const std::vector<std::string> input = {};
  const int expected = 0;
  const int result = solution.sum_of_lengths(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  const std::vector<std::string> input = {"",    " ",    "  ",
                                          "   ", "    ", "     "};
  const int expected = 15;
  const int result = solution.sum_of_lengths(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
  const std::vector<std::string> input = {"0", "313", "1234567890"};
  const int expected = 14;
  const int result = solution.sum_of_lengths(input);
  EXPECT_EQ(result, expected);
}
