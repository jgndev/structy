#include "solution.h"


bool Solution::findPath(Node *root, const std::string &target, std::vector<std::string> &path) {
  if (root == nullptr) {
    return false;
  }

  path.push_back(root->val);

  if (root->val == target) {
    return true;
  }

  if (findPath(root->left, target, path) || findPath(root->right, target, path)) {
    return true;
  }

  path.pop_back();
  return false;
}

std::vector<std::string>* Solution::pathFinder(Node *root, std::string target) {
  std::vector<std::string> path;

  if (findPath(root, target, path)) {
    return new std::vector<std::string>(path);
  }

  return nullptr;
}
