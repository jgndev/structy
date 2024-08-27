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

func sumList(head *Node) int {
	total := 0

	current := head

	for current != nil {
		total += current.val
		current = current.next
	}

	return total
}
