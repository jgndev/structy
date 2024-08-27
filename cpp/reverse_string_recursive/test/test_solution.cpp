#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  string input = "hello";
  const string expected = "olleh";
  const string result = solution.reverse_string(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  string input = "abcdefg";
  const string expected = "gfedcba";
  const string result = solution.reverse_string(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  string input = "stopwatch";
  const string expected = "hctawpots";
  const string result = solution.reverse_string(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  string input = "";
  const string expected = "";
  const string result = solution.reverse_string(input);
  EXPECT_EQ(result, expected);
}
