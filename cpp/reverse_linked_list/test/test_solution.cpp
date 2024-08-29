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

  Node *result = solution.reverse_list(&a);

  ASSERT_EQ(result->val, "f");
  ASSERT_EQ(result->next->val, "e");
  ASSERT_EQ(result->next->next->val, "d");
  ASSERT_EQ(result->next->next->next->val, "c");
  ASSERT_EQ(result->next->next->next->next->val, "b");
  ASSERT_EQ(result->next->next->next->next->next->val, "a");
}
