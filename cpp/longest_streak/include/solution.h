#pragma once

class Node {
public:
  int val;
  Node *next;

  Node(int v) : val(v), next(nullptr) {}
};

class Solution {
public:
  int longest_streak(Node *head);
};
