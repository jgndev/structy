package solution

type Node struct {
	val  string
	next *Node
}

func NewNode(val string) *Node {
	return &Node{
		val:  val,
		next: nil,
	}
}

func linkedListValues(head *Node) []string {
	current := head

	result := []string{}

	for current != nil {
		result = append(result, current.val)
		current = current.next
	}

	return result
}
