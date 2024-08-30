#pragma once

class Node {
public:
  int val;
  Node *next;

  Node(int v) : val(v), next(nullptr) {
  }
};

class Solution {
public:
  Node *merge_lists(Node *head1, Node *head2);
};
