#pragma once

#include <string>
#include <queue>

class Node {
 public:
  std::string val;
  Node *left;
  Node *right;

  Node(std::string v) : val(v), left(nullptr), right(nullptr) {}

};

class Solution {
 public:
  std::string bottomRightValue(Node *root);
};