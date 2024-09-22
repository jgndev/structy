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

func treeIncludes(root *Node, target string) bool {
	if root == nil {
		return false
	}

	var stack []*Node
	stack = append(stack, root)

	// while the stack is not empty
	for len(stack) != 0 {
		// get the top node
		curr := stack[len(stack)-1]
		// pop the top node
		stack = stack[:len(stack)-1]

		// compare curr's value with target
		if curr.val == target {
			return true
		}

		// depth first search order, right then left
		// if curr.right exists (not nil) push it on the stack
		if curr.right != nil {
			stack = append(stack, curr.right)
		}

		// if curr.left exists (not nil) push it on the stack
		if curr.left != nil {
			stack = append(stack, curr.left)
		}
	}

	// all values in the tree searched and did not find a match
	return false
}
