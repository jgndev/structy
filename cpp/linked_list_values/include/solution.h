#pragma once

#include <string>
#include <vector>

using std::string;
using std::vector;

class Node {
public:
  string val;
  Node *next;

  Node(string initial_value) {
    val = initial_value;
    next = nullptr;
  }
};

class Solution {
public:
  vector<string> linked_list_values(Node *head);
};
