#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
 protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  auto a = Node(3);
  auto b = Node(11);
  auto c = Node(4);
  auto d = Node(4);
  auto e = Node(-2);
  auto f = Node(1);

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;

  const int result = solution.maxPathSum(&a);
  constexpr int expected = 18;

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  auto a = Node(5);
  auto b = Node(11);
  auto c = Node(54);
  auto d = Node(20);
  auto e = Node(15);
  auto f = Node(1);
  auto g = Node(3);

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  e.left = &f;
  e.right = &g;

  const int result = solution.maxPathSum(&a);
  constexpr int expected = 59;

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  auto a = Node(-1);
  auto b = Node(-6);
  auto c = Node(-5);
  auto d = Node(-3);
  auto e = Node(0);
  auto f = Node(-13);
  auto g = Node(-1);
  auto h = Node(-2);

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;
  e.left = &g;
  f.right = &h;

  const int result = solution.maxPathSum(&a);
  constexpr int expected = -8;

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  auto a = Node(42);

  const int result = solution.maxPathSum(&a);
  constexpr int expected = 42;

  EXPECT_EQ(result, expected);
}