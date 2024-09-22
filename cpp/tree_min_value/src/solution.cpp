#include "solution.h"

int Solution::treeMinValue(Node *root) {
  if (root == nullptr) {
    return std::numeric_limits<int>::max();
  }

  // initialize min to the max value of int.
  int min = std::numeric_limits<int>::max();

  std::stack<Node*> stack;
  stack.push(root);

  while (!stack.empty()) {
    // take the top node as curr.
    auto curr = stack.top();
    // pop the stack.
    stack.pop();

    // update min to be the minimum between previously
    // seen values and curr's value.
    min = std::min(min, curr->val);

    // dfs order, right then left.
    if (curr->right != nullptr) {
      stack.push(curr->right);
    }

    if (curr->left != nullptr) {
      stack.push(curr->left);
    }
  }

  return min;
}