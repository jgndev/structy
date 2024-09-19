#pragma once

#include <string>
#include <vector>
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
    std::vector<std::string> breadth_first_values(Node *root);
};