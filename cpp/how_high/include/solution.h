#pragma once

#include <string>
#include <algorithm>

class Node {
 public:
  std::string val;
  Node *left;
  Node *right;

  Node(std::string v) : val(v), left(nullptr), right(nullptr) {}
};

class Solution {
 public:
  int howHigh(Node *root);
};