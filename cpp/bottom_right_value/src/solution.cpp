#include "solution.h"

std::string Solution::bottomRightValue(Node *root) {
  if (root == nullptr) {
    return "";
  }

  std::queue<Node *> queue;
  queue.push(root);

  Node *curr;

  while (!queue.empty()) {
    // take the front of the queue as curr
    curr = queue.front();

    // pop the queue
    queue.pop();

    if (curr->left != nullptr) {
      queue.push(curr->left);
    }

    if (curr->right != nullptr) {
      queue.push(curr->right);
    }
  }

  return curr->val;
}