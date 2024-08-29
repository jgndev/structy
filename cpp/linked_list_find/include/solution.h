#pragma once

#include <string>

class Node {
public:
  std::string val;
  Node *next;

  Node(std::string s) : val(s), next(nullptr) {}
};

class Solution {
public:
  bool linked_list_find(Node *head, std::string target);
};
