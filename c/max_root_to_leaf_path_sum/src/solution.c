#include "solution.h"

// Helper function to create a new Node.
Node* newNode(int v) {
  Node *node = (Node*)malloc(sizeof(Node));
  node->val = v;
  node->left = NULL;
  node->right = NULL;

  return node;
}

// Helper function for recursive DFS
int dfs(Node *node) {
  if (node == NULL) {
    return INT_MIN;
  }

  if (node->left == NULL && node->right == NULL) {
    return node->val;
  }

  int leftMax = dfs(node->left);
  int rightMax = dfs(node->right);

  return (leftMax > rightMax ? leftMax : rightMax) + node->val;
}

int maxPathSum(Node *root) {
  return dfs(root);
}

