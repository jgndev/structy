#pragma once

#include <string>

class Node {
 public:
  std::string val;
  Node *next;

  Node(std::string &v) : val(v), next(nullptr) {}
};

class Solution {
 public:
  Node *zipper_lists(Node *head1, Node *head2);
};
