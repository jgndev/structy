#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  const int result = solution.tree_sum(nullptr);
  constexpr int expected = 0;
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  const auto root = new Node(5);
  const int result = solution.tree_sum(root);
  constexpr int expected = 5;
  EXPECT_EQ(result, expected);
  delete root;
}

TEST_F(SolutionTest, TestCaseThree) {
  const auto root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  const int result = solution.tree_sum(root);
  constexpr int expected = 28;
  EXPECT_EQ(result, expected);
  delete root;
}

TEST_F(SolutionTest, TestCaseFour) {
  const auto root = new Node(1);
  root->left = new Node(2);
  root->left->left = new Node(3);
  root->left->left->left = new Node(4);
  const int result = solution.tree_sum(root);
  constexpr int expected = 10;
  EXPECT_EQ(result, expected);
  delete root;
}

TEST_F(SolutionTest, TestCaseFive) {
  const auto root = new Node(1);
  root->right = new Node(2);
  root->right->right = new Node(3);
  root->right->right->right = new Node(4);
  const int result = solution.tree_sum(root);
  constexpr int expected = 10;
  EXPECT_EQ(result, expected);
  delete root;
}