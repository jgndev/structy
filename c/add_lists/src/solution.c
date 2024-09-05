#include "solution.h"

Node *add_lists(const Node *head1, const Node *head2) {
  Node *dummy_head = malloc(sizeof(Node));

  if (!dummy_head) {
    return NULL;
  }

  dummy_head->val = 0;
  dummy_head->next = NULL;

  Node *tail = dummy_head;
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

    Node *new_node = malloc(sizeof(Node));
    if (!new_node) {
      // clean up and return NULL on allocation failure
      Node *current = dummy_head;
      while (current) {
        Node *temp = current;
        current = current->next;
        free(temp);
      }

      return NULL;
    }

    new_node->val = sum % 10;
    new_node->next = NULL;

    tail->next = new_node;
    tail = tail->next;
    carry = sum / 10;
  }

  Node *result = dummy_head->next;
  free(dummy_head);

  return result;
}

