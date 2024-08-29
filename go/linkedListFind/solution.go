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

func linkedListFind(head *Node, target string) bool {
	current := head

	for current != nil {
		if current.val == target {
			return true
		}

		current = current.next
	}

	return false
}
