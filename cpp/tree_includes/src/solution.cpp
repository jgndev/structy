#include "solution.h"

bool Solution::treeIncludes(Node *root, std::string target) {
  // early return if the root node is nullptr.
  if (root == nullptr) {
    return false;
  }

  // stack for storing the nodes.
  std::stack<Node *> stack;

  // push the root node onto the stack.
  stack.push(root);

  // while the stack is not empty.
  while (!stack.empty()) {
    // get the node on the top of the stack.
    auto curr = stack.top();

    // pop the top node off the stack.
    stack.pop();

    // check if the value of the node matches the target.
    if (curr->val == target) {
      // found a match, return true.
      return true;
    }

    // did not find a match, push nodes onto the stack in DFS order, right then left.
    if (curr->right != nullptr) {
      stack.push(curr->right);
    }

    if (curr->left != nullptr) {
      stack.push(curr->left);
    }
  }

  return false;
}