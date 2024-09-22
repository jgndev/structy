#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
 protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  Node a(3);
  Node b(11);
  Node c(4);
  Node d(4);
  Node e(-2);
  Node f(1);

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;

  EXPECT_EQ(solution.treeMinValue(&a), -2);
}

TEST_F(SolutionTest, TestCaseTwo) {
  Node a(5);

  EXPECT_EQ(solution.treeMinValue(&a), 5);
}

TEST_F(SolutionTest, TestCaseThree) {
  Node a(10);
  Node b(5);
  Node c(15);
  Node d(3);
  Node e(7);

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;

  EXPECT_EQ(solution.treeMinValue(&a), 3);
}

TEST_F(SolutionTest, TestCaseFour) {
  Node a(-1);
  Node b(-5);
  Node c(-3);
  Node d(-10);
  Node e(-2);

  a.left = &b;
  a.right = &c;
  b.left = &d;
  c.right = &e;

  EXPECT_EQ(solution.treeMinValue(&a), -10);
}

TEST_F(SolutionTest, TestCaseFive) {
  Node a(8);
  Node b(3);
  Node c(1);
  Node d(6);
  Node e(4);
  Node f(7);
  Node g(10);
  Node h(14);
  Node i(13);

  a.left = &b;
  a.right = &g;
  b.left = &c;
  b.right = &d;
  d.left = &e;
  d.right = &f;
  g.right = &h;
  h.left = &i;

  EXPECT_EQ(solution.treeMinValue(&a), 1);
}