#include "solution.h"

int Solution::sum_list(Node *head) {
  int total = 0;

  Node *current = head;

  while (current != nullptr) {
    total += current->val;
    current = current->next;
  }

  return total;
}
