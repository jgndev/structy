package solution

type Node struct {
	val   string
	left  *Node
	right *Node
}

func NewNode(v string) *Node {
	return &Node{
		val:   v,
		left:  nil,
		right: nil,
	}
}

func bottomRightValue(root *Node) string {
	if root == nil {
		return ""
	}

	queue := []*Node{root}

	curr := NewNode("")

	for len(queue) > 0 {
		// take the front of the queue
		curr = queue[0]
		// pop the queue
		queue = queue[1:]

		if curr.left != nil {
			queue = append(queue, curr.left)
		}

		if curr.right != nil {
			queue = append(queue, curr.right)
		}
	}

	return curr.val
}
