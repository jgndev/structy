#include "solution.h"

std::vector<std::string> Solution::breadth_first_values(Node *root) {
  std::vector<std::string> values;
  std::queue<Node*> queue;

  if (root != nullptr) {
    queue.push(root);
  }

  while (!queue.empty()) {
    const auto current = queue.front();
    values.push_back(current->val);

    queue.pop();

    if (current->left != nullptr) {
      queue.push(current->left);
    }

    if (current->right != nullptr) {
      queue.push(current->right);
    }
  }

  return values;
}