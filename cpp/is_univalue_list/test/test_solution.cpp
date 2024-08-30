#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

/*
Node u(2);
Node v(2);
Node w(2);
Node x(2);
Node y(2);

u.next = &v;
v.next = &w;
w.next = &x;
x.next = &y;

// 2 -> 2 -> 2 -> 2 -> 2

isUnivalueList(&u); // 1 (true)

*/

TEST_F(SolutionTest, TestCaseOne) {
  Node a(7);
  Node b(7);
  Node c(7);

  a.next = &b;
  b.next = &c;

  const bool result = solution.is_univalue_list(&a);
  constexpr bool expected = true;

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  Node a(7);
  Node b(7);
  Node c(4);

  a.next = &b;
  b.next = &c;

  const bool result = solution.is_univalue_list(&a);
  constexpr bool expected = false;

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  Node u(2);
  Node v(2);
  Node w(2);
  Node x(2);
  Node y(2);

  u.next = &v;
  v.next = &w;
  w.next = &x;
  x.next = &y;

  const bool result = solution.is_univalue_list(&u);
  constexpr bool expected = true;

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  Node z(42);

  const bool result = solution.is_univalue_list(&z);
  constexpr bool expected = true;

  EXPECT_EQ(result, expected);
}
