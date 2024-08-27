#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  Node a(2);
  Node b(8);
  Node c(3);
  Node d(-1);
  Node e(7);

  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;

  int result = solution.sum_list(&a);
  constexpr int expected = 19;

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  Node x(38);
  Node y(4);

  x.next = &y;

  int result = solution.sum_list(&x);
  constexpr int expected = 42;

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  Node z(100);

  int result = solution.sum_list(&z);
  constexpr int expected = 100;
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
  int result = solution.sum_list(nullptr);
  constexpr int expected = 0;

  EXPECT_EQ(result, expected);
}
