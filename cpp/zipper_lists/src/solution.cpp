#include "solution.h"

Node *Solution::zipper_lists(Node *head1, Node *head2) {
  if (head1 == nullptr) {
    return head2;
  }

  if (head2 == nullptr) {
    return head1;
  }

  auto head = head1;
  auto tail = head;

  auto curr1 = head->next;
  auto curr2 = head2;

  int count = 1;

  while (curr1 != nullptr && curr2 != nullptr) {
    if (count % 2 == 0) {
      tail->next = curr1;
      curr1 = curr1->next;
    } else {
      tail->next = curr2;
      curr2 = curr2->next;
    }

    tail = tail->next;
    ++count;
  }

  // curr1 and curr2 could still have nodes
  if (curr1 != nullptr) {
    tail->next = curr1;
  }

  if (curr2 != nullptr) {
    tail->next = curr2;
  }

  return head;
}
