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
  Node *insert_node(Node *head, std::string val, int idx);
};
