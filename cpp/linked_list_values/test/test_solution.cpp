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

  const vector<string> result = solution.linked_list_values(&a);
  const vector<string> expected = {"a", "b", "c", "d"};
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  Node x("x");
  Node y("y");

  x.next = &y;

  const vector<string> result = solution.linked_list_values(&x);
  const vector<string> expected = {"x", "y"};
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  Node q("q");

  const vector<string> result = solution.linked_list_values(&q);
  const vector<string> expected = {"q"};
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  auto result = solution.linked_list_values(nullptr);
  const vector<string> expected = {};
  EXPECT_EQ(result, expected);
}
