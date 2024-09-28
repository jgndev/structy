#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
 protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  auto a = Node("a");
  auto b = Node("b");
  auto c = Node("c");
  auto d = Node("d");
  auto e = Node("e");
  auto f = Node("f");

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;

  constexpr int expected = 2;
  const int result = solution.howHigh(&a);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  auto a = Node("a");
  auto b = Node("b");
  auto c = Node("c");
  auto d = Node("d");
  auto e = Node("e");
  auto f = Node("f");
  auto g = Node("g");

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;
  e.left = &g;

  constexpr int expected = 3;
  const int result = solution.howHigh(&a);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  auto a = Node("a");
  auto c = Node("c");

  a.right = &c;

  constexpr int expected = 1;
  const int result = solution.howHigh(&a);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  auto a = Node("a");

  constexpr int expected = 0;
  const int result = solution.howHigh(&a);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
  constexpr int expected = -1;
  const int result = solution.howHigh(nullptr);

  EXPECT_EQ(result, expected);
}