package solution

type Node struct {
	val  int
	next *Node
}

func NewNode(v int) *Node {
	return &Node{
		val:  v,
		next: nil,
	}
}

func mergeLists(head1, head2 *Node) *Node {
	// using a dummy node to simplify the merge
	dummy := NewNode(0)
	// operations will take place on tail, initially pointed at dummy
	tail := dummy

	// pointer to the head1 node
	curr1 := head1
	// pointer to the head2 node
	curr2 := head2

	// while curr1 and curr2 are not nil
	for curr1 != nil && curr2 != nil {
		// if curr1's value is less than curr2's value
		if curr1.val < curr2.val {
			// update tail to point at curr1
			tail.next = curr1
			// update curr1 to next to continue iteration through the list
			curr1 = curr1.next
		} else {
			// curr2's value was smaller, update tail to piont at curr2
			tail.next = curr2
			// update curr2 to next to continue iteration through the list
			curr2 = curr2.next
		}

		// update tail to tail's next to continue iteration through the lists
		tail = tail.next
	}

	// if curr1 still hads nodes, append them to tail's next
	if curr1 != nil {
		tail.next = curr1
	}

	// if curr2 still has nodes, append them to tail's next
	if curr2 != nil {
		tail.next = curr2
	}

	// return dummy node's next which is the new head
	return dummy.next
}
