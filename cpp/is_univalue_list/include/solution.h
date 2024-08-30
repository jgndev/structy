#pragma once

class Node {
public:
  int val;
  Node *next;

  Node(int v) : val(v), next(nullptr) {}
};

class Solution {
public:
  bool is_univalue_list(Node *head);
};
