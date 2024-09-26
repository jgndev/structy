#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
 protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  auto a = Node(12);
  auto b = Node(6);
  auto c = Node(6);
  auto d = Node(4);
  auto e = Node(6);
  auto f = Node(12);

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;

  constexpr int expected = 3;

  const int result = solution.treeValueCount(&a, 6);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  auto a = Node(12);
  auto b = Node(6);
  auto c = Node(6);
  auto d = Node(4);
  auto e = Node(6);
  auto f = Node(12);

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;

  constexpr int expected = 2;

  const int result = solution.treeValueCount(&a, 12);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  auto a = Node(7);
  auto b = Node(5);
  auto c = Node(1);
  auto d = Node(1);
  auto e = Node(8);
  auto f = Node(7);
  auto g = Node(1);
  auto h = Node(1);

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;
  e.left = &g;
  f.right = &h;

  constexpr int expected = 4;

  const int result = solution.treeValueCount(&a, 1);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  auto a = Node(7);
  auto b = Node(5);
  auto c = Node(1);
  auto d = Node(1);
  auto e = Node(8);
  auto f = Node(7);
  auto g = Node(1);
  auto h = Node(1);

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;
  e.left = &g;
  f.right = &h;

  constexpr int expected = 0;

  const int result = solution.treeValueCount(&a, 9);

  EXPECT_EQ(result, expected);
}