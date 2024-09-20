#pragma once

#include <vector>
#include <stack>

class Node {
public:
  int val;
  Node *left;
  Node *right;

  Node(int v) : val(v), left(nullptr), right(nullptr) {}

  ~Node() {
    delete left;
    delete right;
  }
};

class Solution {
  public:
    int tree_sum(Node *root);
};