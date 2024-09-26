#include "solution.h"

int Solution::treeValueCount(Node *root, int target) {
  int counter = 0;
  std::stack<Node *> stack;

  // if the root node is nullptr, return 0 for the count.
  if (root == nullptr) {
    return 0;
  }

  // root node is not nullptr, push it onto the stack.
  stack.push(root);

  // while the stack is not empty, grab the top node and check its value
  // to see if it is a match with target.
  while (!stack.empty()) {
    // get the top node in the stack.
    auto curr = stack.top();

    // check curr's value for a match with target.
    if (curr->val == target) {
      // found a match, increment counter.
      ++counter;
    }

    // pop the node off the stack.
    stack.pop();

    // push child nodes onto the stack in DFS order, right then left.
    if (curr->right != nullptr) {
      stack.push(curr->right);
    }

    if (curr->left != nullptr) {
      stack.push(curr->left);
    }
  }

  return counter;
}