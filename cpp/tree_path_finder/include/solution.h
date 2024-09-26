#pragma once

#include <vector>
#include <string>

class Node {
 public:
  std::string val;
  Node *left;
  Node *right;

  Node(std::string v) : val(v), left(nullptr), right(nullptr) {}
};

class Solution {
 private:
  bool findPath(Node *root, const std::string &target, std::vector<std::string> &path);
 public:
  std::vector<std::string> *pathFinder(Node *root, std::string target);
};