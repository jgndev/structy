#pragma once

#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Node {
  int val;
  struct Node *left;
  struct Node *right;
} Node;

Node* newNode(int v);

int maxPathSum(Node *root);

