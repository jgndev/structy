#include <stdlib.h>
#include "solution.h"


bool treeIncludes(Node *root, char* target) {
  if (root == NULL) {
    return false;
  }

  Stack* stack = createStack(100);
  push(stack, root);

  while (!isEmpty(stack)) {
    Node* curr = pop(stack);

    if (strcmp(curr->val, target) == 0) {
      freeStack(stack);
      return true;
    }

    if (curr->right != NULL) {
      push(stack, curr->right);
    }

    if (curr->left != NULL) {
      push(stack, curr->left);
    }
  }

  freeStack(stack);
  return false;
}

Node* createNode(const char* val) {
  Node* newNode = (Node*)malloc(sizeof(Node));

  if (newNode == NULL) {
    return NULL;
  }

  newNode->val = strdup(val);
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

Stack* createStack(int capacity) {
  Stack* stack = (Stack*)malloc(sizeof(Stack));
  stack->capacity = capacity;
  stack->top = -1;
  stack->items = (Node**)malloc(stack->capacity * sizeof(Node*));

  return stack;
}

void push(Stack* stack, Node* node) {
  if (stack->top == stack->capacity - 1) {
    // stack is full
    return;
  }

  stack->items[++stack->top] = node;
}

bool isEmpty(Stack* stack) {
  return stack->top == -1;
}

Node* pop(Stack* stack) {
  if (isEmpty(stack)) {
    return NULL;
  }

  return stack->items[stack->top--];
}

void freeStack(Stack* stack) {
  if (stack == NULL) {
    return;
  }

  free(stack->items);
  free(stack);
}

void freeTree(Node* root) {
  if (root == NULL) {
    return;
  }

  freeTree(root->left);
  freeTree(root->right);
  free(root->val);
  free(root);
}
