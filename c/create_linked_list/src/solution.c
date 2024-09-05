#include "solution.h"

#include <stdio.h>
#include <stdlib.h>

Node *create_node(const char *value) {
  Node *new_node = malloc(sizeof(Node));

  if (new_node == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    exit(1);
  }

  new_node->val = strdup(value);
  new_node->next = NULL;

  return new_node;
}

Node *create_linked_list(char **values, size_t n) {
  if (n == 0 || values == NULL) {
    return NULL;
  }

  Node *head = create_node(values[0]);
  Node *curr = head;

  for (size_t i = 1; i < n; ++i) {
    curr->next = create_node(values[i]);
    curr = curr->next;
  }

  return head;
}
