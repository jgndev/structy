package solution

type Node struct {
	val   string
	left  *Node
	right *Node
}

func depthFirstValues(root *Node) []string {
	if root == nil {
		return []string{}
	}

	values := []string{}
	stack := []*Node{root}

	for len(stack) > 0 {
		// get the top node
		current := stack[len(stack)-1]
		// pop the top node
		stack = stack[:len(stack)-1]

		values = append(values, current.val)

		if current.right != nil {
			stack = append(stack, current.right)
		}

		if current.left != nil {
			stack = append(stack, current.left)
		}
	}

	return values
}
