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
  Node *remove_node(Node *head, std::string target);
};
