#include "solution.h"

Node *Solution::create_linked_list(std::vector<std::string> values) {
  if (values.empty()) {
    return nullptr;
  }

  Node *head = new Node(values[0]);
  Node *curr = head;

  auto n = values.size();

  for (size_t i = 1; i < n; ++i) {
    curr->next = new Node(values[i]);
    curr = curr->next;
  }

  return head;
}
