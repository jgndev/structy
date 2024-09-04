package solution

type Node struct {
	val  string
	next *Node
}

func NewNode(v string) *Node {
	return &Node{
		val:  v,
		next: nil,
	}
}

func removeNode(head *Node, target string) *Node {
	if head.val == target {
		return head.next
	}

	curr := head
	var prev *Node

	for curr != nil {
		if curr.val == target {
			prev.next = curr.next
			break
		}

		prev = curr
		curr = curr.next
	}

	return head
}
