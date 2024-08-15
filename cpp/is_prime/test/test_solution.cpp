#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  const int n = 2;
  const bool expected = true;
  const bool result = solution.is_prime(n);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  const int n = 3;
  const bool expected = true;
  const bool result = solution.is_prime(n);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  const int n = 4;
  const bool expected = false;
  const bool result = solution.is_prime(n);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  const int n = 5;
  const bool expected = true;
  const bool result = solution.is_prime(n);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
  const int n = 6;
  const bool expected = false;
  const bool result = solution.is_prime(n);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseSix) {
  const int n = 7;
  const bool expected = true;
  const bool result = solution.is_prime(n);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseSeven) {
  const int n = 8;
  const bool expected = false;
  const bool result = solution.is_prime(n);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseEight) {
  const int n = 25;
  const bool expected = false;
  const bool result = solution.is_prime(n);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseNine) {
  const int n = 31;
  const bool expected = true;
  const bool result = solution.is_prime(n);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTen) {
  const int n = 2017;
  const bool expected = true;
  const bool result = solution.is_prime(n);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseEleven) {
  const int n = 2048;
  const bool expected = false;
  const bool result = solution.is_prime(n);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwelve) {
  const int n = 2048;
  const bool expected = false;
  const bool result = solution.is_prime(n);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThirteen) {
  const int n = 1;
  const bool expected = false;
  const bool result = solution.is_prime(n);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFourteen) {
  const int n = 713;
  const bool expected = false;
  const bool result = solution.is_prime(n);
  EXPECT_EQ(result, expected);
}
