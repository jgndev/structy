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

func addLists(l1, l2 *Node) *Node {
	dummy := NewNode(0)
	curr := dummy
	carry := 0

	for l1 != nil || l2 != nil || carry > 0 {
		sum := carry

		if l1 != nil {
			sum += l1.val
			l1 = l1.next
		}

		if l2 != nil {
			sum += l2.val
			l2 = l2.next
		}

		curr.next = NewNode(sum % 10)
		curr = curr.next
		carry = sum / 10
	}

	return dummy.next
}
