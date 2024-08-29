#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  Node a("a");
  Node b("b");
  Node c("c");
  Node d("d");

  a.next = &b;
  b.next = &c;
  c.next = &d;

  constexpr bool expected = true;
  const bool result = solution.linked_list_find(&a, "c");
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  Node a("a");
  Node b("b");
  Node c("c");
  Node d("d");

  a.next = &b;
  b.next = &c;
  c.next = &d;

  constexpr bool expected = true;
  const bool result = solution.linked_list_find(&a, "d");
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  Node a("a");
  Node b("b");
  Node c("c");
  Node d("d");

  a.next = &b;
  b.next = &c;
  c.next = &d;

  constexpr bool expected = false;
  const bool result = solution.linked_list_find(&a, "q");
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  Node a("jason");
  Node b("leneli");

  a.next = &b;

  constexpr bool expected = true;
  const bool result = solution.linked_list_find(&a, "jason");
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
  Node a("potato");

  constexpr bool expected = false;
  const bool result = solution.linked_list_find(&a, "apple");
  EXPECT_EQ(result, expected);
}
