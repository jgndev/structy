#include "solution.h"

Node *Solution::reverse_list(Node *head) {
  auto curr = head;
  Node *prev = nullptr;

  while (curr != nullptr) {
    auto tmp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = tmp;
  }

  return prev;
}
