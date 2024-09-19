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

func breadthFirstValues(root *Node) []string {
	if root == nil {
		return []string{}
	}

	var values []string
	queue := []*Node{root}

	for len(queue) > 0 {
		current := queue[0]
		// pop the queue
		queue = queue[1:]

		values = append(values, current.val)

		if current.left != nil {
			queue = append(queue, current.left)
		}

		if current.right != nil {
			queue = append(queue, current.right)
		}
	}

	return values
}
