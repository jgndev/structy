#include "solution.h"

std::vector<std::string> Solution::depth_first_values(Node *root) {
  std::vector<std::string> values;
  std::stack<Node*> stack;

  if (root == nullptr) {
    return values;
  }

  stack.push(root);

  while (!stack.empty()) {
    const auto current = stack.top();
    values.push_back(current->val);

    stack.pop();

    if (current->right != nullptr) {
      stack.push(current->right);
    }

    if (current->left != nullptr) {
      stack.push(current->left);
    }
  }

  return values;
}