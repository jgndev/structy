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

  constexpr int idx = 2;
  const std::string result = solution.get_node_value(&a, idx);
  const std::string expected = "c";

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

  constexpr int idx = 3;
  const std::string result = solution.get_node_value(&a, idx);
  const std::string expected = "d";

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  Node a("banana");
  Node b("mango");

  a.next = &b;

  constexpr int idx = 0;
  const std::string result = solution.get_node_value(&a, idx);
  const std::string expected = "banana";

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  Node a("alpha");
  Node b("bravo");
  Node c("charlie");
  Node d("delta");
  Node e("echo");
  Node f("foxtrot");

  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;
  e.next = &f;

  constexpr int idx = 6; // out of bounds
  const std::string result = solution.get_node_value(&a, idx);
  const std::string expected = "";

  EXPECT_EQ(result, expected);
}
