#pragma once

#include <string>
#include <vector>

class Node {
public:
  std::string val;
  Node *next;

  Node(std::string v) : val(v), next(nullptr) {}
};

class Solution {
public:
  Node *create_linked_list(std::vector<std::string> values);
};
