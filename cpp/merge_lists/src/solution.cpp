#include "solution.h"

Node *Solution::merge_lists(Node *head1, Node *head2) {
  // using a dummy node to simplify the merge
  Node dummy(0);
  // operations will take place on tail, initialize pointed at dummy
  Node *tail = &dummy;

  // pointer to the head1 node
  auto curr1 = head1;
  // pointer to the head2 node
  auto curr2 = head2;

  // while curr1 and curr2 are not null
  while (curr1 != nullptr && curr2 != nullptr) {
    // if curr1's value is less than curr2's value
    if (curr1->val < curr2->val) {
      // update tail to point at curr1
      tail->next = curr1;
      // update curr1 to curr1's next to continue iteration through the list
      curr1 = curr1->next;
    } else {
      // curr2's value was smaller, update tail to point at curr2
      tail->next = curr2;
      // update curr2 to curr2's next to continue iteration through the list
      curr2 = curr2->next;
    }

    // update tail to tail's next to continue iteration through the lists
    tail = tail->next;
  }

  // if curr1 still has nodes, append them to tail's next
  if (curr1 != nullptr) {
    tail->next = curr1;
  }

  // if curr2 still has nodes, append them to tail's next
  if (curr2 != nullptr) {
    tail->next = curr2;
  }

  // return the dummy node's next which is the new head
  return dummy.next;
}
