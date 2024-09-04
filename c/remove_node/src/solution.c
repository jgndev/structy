#include "solution.h"

Node *new_node(char *v) {
  Node *node = (Node *)malloc(sizeof(Node));
  node->val = v;
  node->next = NULL;
  return node;
}

Node *remove_node(Node *head, const char *target) {
  if (head == NULL) {
    return NULL;
  }

  if (strcmp(head->val, target) == 0) {
    Node *new_head = head->next;
    free(head->val);
    free(head);
    return new_head;
  }

  Node *curr = head;

  while (curr->next != NULL) {
    if (strcmp(curr->next->val, target) == 0) {
      Node *temp = curr->next;
      curr->next = temp->next;
      free(temp->val);
      free(temp);
      break;
    }

    curr = curr->next;
  }

  return head;
}

void free_list(Node *head) {
  while (head != NULL) {
    Node *temp = head;
    head = head->next;
    free(temp->val);
    free(temp);
  }
}
