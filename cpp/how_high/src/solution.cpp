#include "solution.h"

// recursive solution
int Solution::howHigh(Node *root) {
  // base case:
  if (root == nullptr) {
    return -1;
  }

  return 1 + std::max(howHigh(root->left), howHigh(root->right));
}