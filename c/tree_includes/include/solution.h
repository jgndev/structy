#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <string.h>

typedef struct Node {
  char *val;
  struct Node *left;
  struct Node *right;
} Node;


typedef struct Stack {
  Node** items;
  int top;
  int capacity;
} Stack;

// Stack and Node declarations.
Node* createNode(const char* val);
Stack* createStack(int capacity);
void push(Stack* stack, Node* item);
Node* pop(Stack* stack);
bool isEmpty(Stack* stack);
void freeStack(Stack* stack);
void freeTree(Node* root);

// Solution declaration.
bool treeIncludes(Node *root, char* target);

