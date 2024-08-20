#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  std::vector<int> numbers = {1, 2, 3, 4, 5};
  int result = solution.sum_numbers_recursive(numbers);
  int expected = 15;
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  std::vector<int> numbers = {-1, -2, -3, -4, -5};
  int result = solution.sum_numbers_recursive(numbers);
  int expected = -15;
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  std::vector<int> numbers = {-2, 0, 3, -5, 2, 1};
  int result = solution.sum_numbers_recursive(numbers);
  int expected = -1;
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  std::vector<int> numbers = {1, -1, 1, -1, 1, -1 , 1};
  int result = solution.sum_numbers_recursive(numbers);
  int expected = 1;
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
  std::vector<int> numbers = {-10, -9, -8, -7, -6, -5, -4, -3, -2, -1};
  int result = solution.sum_numbers_recursive(numbers);
  int expected = -55;
  EXPECT_EQ(result, expected);
}