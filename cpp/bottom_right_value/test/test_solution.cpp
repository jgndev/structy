#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
 protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  auto a = Node("3");
  auto b = Node("11");
  auto c = Node("10");
  auto d = Node("4");
  auto e = Node("-2");
  auto f = Node("1");

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;

  const std::string expected = "1";
  const std::string result = solution.bottomRightValue(&a);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  auto a = Node("-1");
  auto b = Node("-6");
  auto c = Node("-5");
  auto d = Node("-3");
  auto e = Node("-4");
  auto f = Node("-13");
  auto g = Node("-2");
  auto h = Node("6");

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;
  e.left = &g;
  e.right = &h;

  const std::string expected = "6";
  const std::string result = solution.bottomRightValue(&a);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  auto a = Node("-11");
  auto b = Node("-6");
  auto c = Node("-5");
  auto d = Node("-3");
  auto e = Node("-4");
  auto f = Node("-13");
  auto g = Node("-2");
  auto h = Node("6");
  auto i = Node("7");

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;
  e.left = &g;
  e.right = &h;
  f.left = &i;

  const std::string expected = "7";
  const std::string result = solution.bottomRightValue(&a);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
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
  e.right = &f;

  const std::string expected = "f";
  const std::string result = solution.bottomRightValue(&a);

  EXPECT_EQ(result, expected);
}
