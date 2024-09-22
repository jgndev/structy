#pragma once

#include <string>
#include <stack>

class Node {
 public:
  std::string val;
  Node *left;
  Node *right;

  Node(std::string v) : val(v), left(nullptr), right(nullptr) {}
};

class Solution {
 public:
  bool treeIncludes(Node *root, std::string target);
};