#include "solution.h"

Node *Solution::remove_node(Node *head, std::string target) {
  if (head->val == target) {
    return head->next;
  }

  auto curr = head;
  Node *prev = nullptr;

  while (curr != nullptr) {
    if (curr->val == target) {
      prev->next = curr->next;
      break;
    }

    prev = curr;
    curr = curr->next;
  }

  return head;
}
