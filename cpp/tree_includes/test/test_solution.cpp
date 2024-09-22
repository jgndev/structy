#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
 protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  Node a("a");
  Node b("b");
  Node c("c");
  Node d("d");
  Node e("e");
  Node f("f");

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;

  const bool result = solution.treeIncludes(&a, "e");
  constexpr bool expected = true;

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  Node a("a");
  Node b("b");
  Node c("c");
  Node d("d");
  Node e("e");
  Node f("f");

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;

  const bool result = solution.treeIncludes(&a, "a");
  constexpr bool expected = true;

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  Node a("a");
  Node b("b");
  Node c("c");
  Node d("d");
  Node e("e");
  Node f("f");

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;

  const bool result = solution.treeIncludes(&a, "n");
  constexpr bool expected = false;

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  Node a("a");
  Node b("b");
  Node c("c");
  Node d("d");
  Node e("e");
  Node f("f");
  Node g("g");
  Node h("h");

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;
  e.left = &g;
  e.right = &h;

  const bool result = solution.treeIncludes(&a, "f");
  constexpr bool expected = true;

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
  Node a("a");
  Node b("b");
  Node c("c");
  Node d("d");
  Node e("e");
  Node f("f");
  Node g("g");
  Node h("h");

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;
  e.left = &g;
  e.right = &h;

  const bool result = solution.treeIncludes(&a, "f");
  constexpr bool expected = true;

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseSix) {
  const bool result = solution.treeIncludes(nullptr, "b");
  constexpr bool expected = false;

  EXPECT_EQ(result, expected);
}


