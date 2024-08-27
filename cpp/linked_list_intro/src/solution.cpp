#include "solution.h"

void print_list(Node *head) {
  Node *current = head;

  while (current != nullptr) {
    if (current->next != nullptr) {
      // indicate the node value and an arrow to the next node
      cout << current->val << " -> ";
    } else {
      // indicate the end of the list with an arrow to null
      cout << current->val << " -> nullptr";
    }
    current = current->next;
  }

  cout << endl;
}

void Solution::demo_linked_list() {
  Node a("A");
  Node b("B");
  Node c("C");
  Node d("D");

  a.next = &b;
  b.next = &c;
  c.next = &d;

  // A -> B -> C -> D -> nullptr

  print_list(&a);
}

int main() {

  Solution solution;
  solution.demo_linked_list();

  return 0;
}
