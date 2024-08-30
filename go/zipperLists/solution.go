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

func zipperLists(head1, head2 *Node) *Node {
	head := head1
	tail := head

	curr1 := head1.next
	curr2 := head2

	count := 1

	for curr1 != nil && curr2 != nil {
		if count%2 == 0 {
			tail.next = curr1
			curr1 = curr1.next
		} else {
			tail.next = curr2
			curr2 = curr2.next
		}

		tail = tail.next
		count++
	}

	if curr1 != nil {
		tail.next = curr1
	}

	if curr2 != nil {
		tail.next = curr2
	}

	return head
}
