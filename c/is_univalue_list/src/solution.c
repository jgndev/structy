#include "solution.h"

bool is_univalue_list(struct Node *head) {
  struct Node *curr = head;

  int last = head->val;

  while (curr != NULL) {
    if (curr->val != last) {
      return false;
    }

    curr = curr->next;
  }

  return true;
}
