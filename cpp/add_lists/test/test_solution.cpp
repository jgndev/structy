#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;

  // helper function to create a linked list from a vector of integers
  Node *create_list(const std::vector<int> &values) {
    auto dummy = new Node(0);
    auto current = dummy;

    for (int val : values) {
      current->next = new Node(val);
      current = current->next;
    }

    auto head = dummy->next;
    delete dummy;

    return head;
  }

  // helper function to convert a linked list into a vector
  std::vector<int> list_to_vector(Node *head) {
    std::vector<int> result;

    while (head) {
      result.push_back(head->val);
      head = head->next;
    }

    return result;
  }

  // helper function to delete a linked list
  void delete_list(Node *head) {
    while (head) {
      auto temp = head;
      head = head->next;
      delete temp;
    }
  }
};

TEST_F(SolutionTest, TestCaseOne) {
  auto list1 = create_list({1, 2, 6});
  auto list2 = create_list({4, 5, 3});

  auto result = solution.add_lists(list1, list2);
  const std::vector<int> expected = {5, 7, 9};

  EXPECT_EQ(list_to_vector(result), expected);

  delete_list(list1);
  delete_list(list2);
  delete_list(result);
}

TEST_F(SolutionTest, TestCaseTwo) {
  auto list1 = create_list({5});
  auto list2 = create_list({7});

  auto result = solution.add_lists(list1, list2);
  const std::vector<int> expected = {2, 1};

  EXPECT_EQ(list_to_vector(result), expected);

  delete_list(list1);
  delete_list(list2);
  delete_list(result);
}

TEST_F(SolutionTest, TestCaseThree) {
  auto list1 = create_list({1, 2, 3});
  auto list2 = create_list({4, 5});

  auto result = solution.add_lists(list1, list2);
  const std::vector<int> expected = {5, 7, 3};

  EXPECT_EQ(list_to_vector(result), expected);

  delete_list(list1);
  delete_list(list2);
  delete_list(result);
}

TEST_F(SolutionTest, TestCaseFour) {
  auto list1 = create_list({9, 9, 9});
  auto list2 = create_list({1});

  auto result = solution.add_lists(list1, list2);
  const std::vector<int> expected = {0, 0, 0, 1};

  EXPECT_EQ(list_to_vector(result), expected);

  delete_list(list1);
  delete_list(list2);
  delete_list(result);
}
