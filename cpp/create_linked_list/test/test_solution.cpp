#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  std::vector<std::string> values = {"h", "e", "y"};
  Node *head = solution.create_linked_list(values);

  ASSERT_EQ(head->val, "h");
  ASSERT_EQ(head->next->val, "e");
  ASSERT_EQ(head->next->next->val, "y");

  delete (head);
}

TEST_F(SolutionTest, TestCaseTwo) {
  std::vector<std::string> values = {"1", "7", "1", "8"};
  Node *head = solution.create_linked_list(values);

  ASSERT_EQ(head->val, "1");
  ASSERT_EQ(head->next->val, "7");
  ASSERT_EQ(head->next->next->val, "1");
  ASSERT_EQ(head->next->next->next->val, "8");

  delete (head);
}

TEST_F(SolutionTest, TestCaseThree) {
  std::vector<std::string> values = {"a"};
  Node *head = solution.create_linked_list(values);

  ASSERT_EQ(head->val, "a");
  ASSERT_EQ(head->next, nullptr);

  delete (head);
}

TEST_F(SolutionTest, TestCaseFour) {
  std::vector<std::string> values;

  ASSERT_EQ(solution.create_linked_list(values), nullptr);
}
