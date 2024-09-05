#include "solution.h"

Node *Solution::add_lists(Node *head1, Node *head2) {
  auto dummy_head = new Node(0);
  auto tail = dummy_head;

  int carry = 0;

  while (head1 || head2 || carry) {
    int sum = carry;

    if (head1) {
      sum += head1->val;
      head1 = head1->next;
    }

    if (head2) {
      sum += head2->val;
      head2 = head2->next;
    }

    tail->next = new Node(sum % 10);
    tail = tail->next;
    carry = sum / 10;
  }

  auto result = dummy_head->next;
  delete dummy_head;

  return result;
}
