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

func createLinkedList(values []string) *Node {
	if len(values) == 0 {
		return nil
	}

	head := NewNode(values[0])
	curr := head

	n := len(values)

	for i := 1; i < n; i++ {
		curr.next = NewNode(values[i])
		curr = curr.next
	}

	return head
}
