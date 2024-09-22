#pragma once

#include <limits>
#include <stack>

class Node {
 public:
  int val;
  Node *left;
  Node *right;

  Node(int v) : val(v), left(nullptr), right(nullptr) {}
};

class Solution {
 public:
  int treeMinValue(Node *root);
};