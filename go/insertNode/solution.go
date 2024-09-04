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

func insertNode(head *Node, val string, idx int) *Node {
	if idx == 0 {
		return &Node{val: val, next: head}
	}

	curr := head
	insertPos := idx - 1
	i := 0

	for curr != nil {
		if i == insertPos {
			node := &Node{val: val, next: curr.next}
			curr.next = node
			break
		}

		i++
		curr = curr.next
	}

	return head
}
