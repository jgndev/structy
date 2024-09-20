#include "solution.h"

int Solution::tree_sum(Node *root) {
  if (root == nullptr) {
    return 0;
  }

  std::stack<Node*> stack;
  int sum = 0;

  stack.push(root);

  while (!stack.empty()) {
    const auto current = stack.top();
    sum += current->val;

    stack.pop();

    if (current->right != nullptr) {
      stack.push(current->right);
    }

    if (current->left != nullptr) {
      stack.push(current->left);
    }
  }

  return sum;
}
