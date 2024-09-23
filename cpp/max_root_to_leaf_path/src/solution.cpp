#include "solution.h"

int dfs(Node* node) {
  // Base case:
  // If the node is null, return the minimum possible int.
  // This ensures that paths ending with null nodes are not
  // considered in the final result.
  if (node == nullptr) {
    return std::numeric_limits<int>::min();
  }

  // If it is a leaf node (no children), return its value.
  // This is a valid end to a root-to-leaf path.
  if (node->left == nullptr && node->right == nullptr) {
    return node->val;
  }

  // Recursively calculate the max path sum for the left and
  // right subtrees.
  int leftMax = dfs(node->left);
  int rightMax = dfs(node->right);

  // Return the larger of the two paths, plus the current node's value.
  // This builds up the path sum as we return up the tree.
  return std::max(leftMax, rightMax) + node->val;
}

int Solution::maxPathSum(Node *root) {
  // Call the helper function with the root node to calculate the sum.
  return dfs(root);
}