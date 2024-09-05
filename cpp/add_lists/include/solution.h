#pragma once

#include <vector>

class Node {
public:
  int val;
  Node *next;

  Node(int v) : val(v), next(nullptr) {}
};

class Solution {
public:
  Node *add_lists(Node *head1, Node *head2);
};
