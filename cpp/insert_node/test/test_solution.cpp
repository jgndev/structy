#include "solution.h"
#include <gtest/gtest.h>
#include <vector>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;

  // Helper function to create a linked list from a vector of strings
  Node *create_list(const std::vector<std::string> &values) {
    Node *head = nullptr;
    Node *current = nullptr;

    for (const auto &value : values) {
      if (!head) {
        head = new Node(value);
        current = head;
      } else {
        current->next = new Node(value);
        current = current->next;
      }
    }

    return head;
  }

  // Helper function to convert a linked list to a vector of strings
  std::vector<std::string> list_to_vector(Node *head) {
    std::vector<std::string> result;

    while (head) {
      result.push_back(head->val);
      head = head->next;
    }

    return result;
  }

  // Helper function to delete the linked list
  void delete_list(Node *head) {
    while (head) {
      Node *temp = head;
      head = head->next;
      delete temp;
    }
  }
};

// Test 1: Insert at the beginning of the list
TEST_F(SolutionTest, TestCaseOne) {
  Node *head = create_list({"b", "c", "d"});
  head = solution.insert_node(head, "a", 0);

  std::vector<std::string> expected = {"a", "b", "c", "d"};
  EXPECT_EQ(list_to_vector(head), expected);

  delete_list(head);
}

// Test 2: Insert in the middle of the list
TEST_F(SolutionTest, TestCaseTwo) {
  Node *head = create_list({"a", "c", "d"});
  head = solution.insert_node(head, "b", 1);

  std::vector<std::string> expected = {"a", "b", "c", "d"};
  EXPECT_EQ(list_to_vector(head), expected);

  delete_list(head);
}

// Test 3: Insert at the end of the list
TEST_F(SolutionTest, TestCaseThree) {
  Node *head = create_list({"a", "b", "c"});
  head = solution.insert_node(head, "d", 3);

  std::vector<std::string> expected = {"a", "b", "c", "d"};
  EXPECT_EQ(list_to_vector(head), expected);

  delete_list(head);
}

// Test 4: Insert into an empty list
TEST_F(SolutionTest, TestCaseFour) {
  Node *head = nullptr;
  head = solution.insert_node(head, "a", 0);

  std::vector<std::string> expected = {"a"};
  EXPECT_EQ(list_to_vector(head), expected);

  delete_list(head);
}

// Test 5: Insert at an index beyond the end of the list
TEST_F(SolutionTest, TestCaseFive) {
  Node *head = create_list({"a", "b"});
  head = solution.insert_node(head, "c", 5);

  std::vector<std::string> expected = {"a", "b"};
  EXPECT_EQ(list_to_vector(head), expected);

  delete_list(head);
}
