#include "solution.h"

std::string Solution::get_node_value(Node *head, int idx) {
  auto current = head;
  int i = 0;

  while (current != nullptr) {
    if (i == idx) {
      return current->val;
    }

    ++i;
    current = current->next;
  }

  return "";
}
