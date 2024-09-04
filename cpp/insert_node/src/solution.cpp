#include "solution.h"

Node *Solution::insert_node(Node *head, std::string val, int idx) {
  if (idx == 0) {
    auto new_node = new Node(val);
    new_node->next = head;
    return new_node;
  }

  auto curr = head;
  int insert_pos = idx - 1;
  int i = 0;

  while (curr != nullptr) {
    if (i == insert_pos) {
      auto new_node = new Node(val);
      auto next = curr->next;

      curr->next = new_node;
      new_node->next = next;
    }

    ++i;
    curr = curr->next;
  }

  return head;
}
