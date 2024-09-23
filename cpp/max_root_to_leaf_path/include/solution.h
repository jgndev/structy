#pragma once

#include <algorithm>
#include <limits>

class Node {
 public:
  int val;
  Node *left;
  Node *right;

  Node(int v) : val(v), left(nullptr), right(nullptr) {}
};

class Solution {
  public:
    int maxPathSum(Node* root);
};