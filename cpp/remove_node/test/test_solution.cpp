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
  Node e("e");
  Node f("f");

  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;
  e.next = &f;

  solution.remove_node(&a, "c");

  EXPECT_EQ(a.next, &b);
  EXPECT_EQ(b.next, &d);
  EXPECT_EQ(d.next, &e);
  EXPECT_EQ(e.next, &f);
  EXPECT_EQ(f.next, nullptr);
}

TEST_F(SolutionTest, TestCaseTwo) {
  Node x("x");
  Node y("y");
  Node z("z");

  x.next = &y;
  y.next = &x;

  solution.remove_node(&x, "z");

  EXPECT_EQ(x.next, &y);
  EXPECT_EQ(y.next, nullptr);
}
