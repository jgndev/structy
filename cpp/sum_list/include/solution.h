#pragma once

class Node {
public:
  int val;
  Node *next;

  Node(int initial_val) {
    val = initial_val;
    next = nullptr;
  }
};

class Solution {
public:
  int sum_list(Node *head);
};
