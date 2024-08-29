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

func getNodeValue(head *Node, idx int) string {
	current := head
	i := 0

	for current != nil {
		if i == idx {
			return current.val
		}

		i++
		current = current.next
	}

	return ""
}
