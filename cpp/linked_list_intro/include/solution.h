#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Node {
public:
  std::string val;
  Node *next;

  // constructor
  Node(string initialVal) {
    val = initialVal;
    next = nullptr;
  }
};

class Solution {
public:
  void demo_linked_list();
};
