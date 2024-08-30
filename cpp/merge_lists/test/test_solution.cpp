#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;

  // Helper function to create a linked list from a vector
  Node *create_list(const std::vector<int> &values) {
    Node dummy(0);
    Node *tail = &dummy;

    for (int val: values) {
      tail->next = new Node(val);
      tail = tail->next;
    }

    return dummy.next;
  }

  // Helper function to convert a linked list to a vector
  std::vector<int> list_to_vector(Node *head) {
    std::vector<int> result;

    while (head) {
      result.push_back(head->val);
      head = head->next;
    }

    return result;
  }

  // Helper function to delete a linked list
  void delete_list(Node *head) {
    while (head) {
      Node *temp = head;
      head = head->next;
      delete temp;
    }
  }
};

TEST_F(SolutionTest, MergeEqualLengthLists) {
  Node *list1 = create_list({5, 7, 10});
  Node *list2 = create_list({6, 8, 9});

  Node *result = solution.merge_lists(list1, list2);

  const std::vector<int> expected = {5, 6, 7, 8, 9, 10};
  EXPECT_EQ(list_to_vector(result), expected);

  delete_list(result);
}

TEST_F(SolutionTest, MergeUnequalLengthLists) {
  Node *list1 = create_list({5, 7, 10, 12, 20, 28});
  Node *list2 = create_list({6, 8, 9, 25});

  Node *result = solution.merge_lists(list1, list2);

  const std::vector<int> expected = {5, 6, 7, 8, 9, 10, 12, 20, 25, 28};
  EXPECT_EQ(list_to_vector(result), expected);

  delete_list(result);
}

TEST_F(SolutionTest, MergeWithEmptyList) {
  Node *list1 = create_list({1, 3, 5});
  Node *list2 = nullptr;

  Node *result = solution.merge_lists(list1, list2);

  const std::vector<int> expected = {1, 3, 5};
  EXPECT_EQ(list_to_vector(result), expected);

  delete_list(result);
}
