#include "solution.h"

// function prototypes
void init_queue(Queue *q);
int is_empty(const Queue *q);
void enqueue(Queue *q, Node *item);
Node* dequeue(Queue *q);

char** breadth_first_values(Node *root, int *size) {
  char **values = NULL;
  *size = 0;
  Queue queue;

  init_queue(&queue);

  if (root != NULL) {
    enqueue(&queue, root);
  }

  while (!is_empty(&queue)) {
    const Node *current = dequeue(&queue);

    // reallocate memory for the new value
    values = realloc(values, (*size + 1) * sizeof(char));
    values[*size] = malloc(MAX_STRING_SIZE * sizeof(char));
    strcpy(values[*size], current->val);
    (*size)++;

    if (current->left != NULL) {
      enqueue(&queue, current->left);
    }

    if (current->right != NULL) {
      enqueue(&queue, current->right);
    }
  }

  return values;
}

// queue functions
void init_queue(Queue *q) {
  q->front = -1;
  q->back = -1;
}

int is_empty(const Queue *q) {
  return q->front == -1;
}

void enqueue(Queue *q, Node *item) {
  if (q->back == MAX_QUEUE_SIZE - 1) {
    return;
  }

  if (q->front == -1) {
    q->front = 0;
  }

  q->back++;
  q->items[q->back] = item;
}

Node *dequeue(Queue *q) {
  if (is_empty(q)) {
    return NULL;
  }

  Node *item = q->items[q->front];
  q->front++;

  if (q->front > q->back) {
    q->front = q->back = -1;
  }

  return item;
}