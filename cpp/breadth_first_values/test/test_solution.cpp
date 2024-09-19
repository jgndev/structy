#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  EXPECT_EQ(solution.breadth_first_values(nullptr), std::vector<std::string>{});
}

TEST_F(SolutionTest, TestCaseTwo) {
  Node root("a");
  EXPECT_EQ(solution.breadth_first_values(&root), std::vector<std::string>{"a"});
}

TEST_F(SolutionTest, TestCaseThree) {
  Node a("a"), b("b"), c("c"), d("d"), e("e");
  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;

  auto const result = solution.breadth_first_values(&a);
  auto const expected = std::vector<std::string>{"a", "b", "c", "d", "e"};

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  Node a("a"), b("b"), c("c"), d("d"), e("e"), f("f");
  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;

  auto const result = solution.breadth_first_values(&a);
  auto const expected = std::vector<std::string>{"a", "b", "c", "d", "e", "f"};

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
  Node a("a"), b("b"), c("c"), d("d");
  a.right = &b;
  b.right = &c;
  c.right = &d;

  auto const result = solution.breadth_first_values(&a);
  auto const expected = std::vector<std::string>{"a", "b", "c", "d"};

  EXPECT_EQ(result, expected);
}