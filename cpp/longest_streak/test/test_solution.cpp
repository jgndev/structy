#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  Node a(5);
  Node b(5);
  Node c(7);
  Node d(7);
  Node e(7);
  Node f(6);

  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;
  e.next = &f;

  constexpr int expected = 3;
  const int result = solution.longest_streak(&a);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  Node a(3);
  Node b(3);
  Node c(3);
  Node d(3);
  Node e(9);
  Node f(9);

  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;
  e.next = &f;

  constexpr int expected = 4;
  const int result = solution.longest_streak(&a);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  Node a(9);
  Node b(9);
  Node c(1);
  Node d(9);
  Node e(9);
  Node f(9);

  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;
  e.next = &f;

  constexpr int expected = 3;
  const int result = solution.longest_streak(&a);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  Node a(5);
  Node b(5);

  a.next = &b;

  constexpr int expected = 2;
  const int result = solution.longest_streak(&a);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
  Node a(4);

  constexpr int expected = 1;
  const int result = solution.longest_streak(&a);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseSix) {
  constexpr int expected = 0;
  const int result = solution.longest_streak(nullptr);

  EXPECT_EQ(result, expected);
}
