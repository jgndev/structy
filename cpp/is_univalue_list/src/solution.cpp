#include "solution.h"

bool Solution::is_univalue_list(Node *head) {
  auto curr = head;

  while (curr != nullptr) {
    if (curr->val != head->val) {
      return false;
    }

    curr = curr->next;
  }

  return true;
}
