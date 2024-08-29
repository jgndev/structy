#pragma once

#include <string>

class Node {
public:
  std::string val;
  Node *next;

  Node(std::string v) : val(v), next(nullptr) {}
};

class Solution {
public:
  std::string get_node_value(Node *head, int idx);
};
