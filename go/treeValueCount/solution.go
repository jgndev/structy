package solution

type Node struct {
	val   int
	left  *Node
	right *Node
}

func NewNode(v int) *Node {
	return &Node{
		val:   v,
		left:  nil,
		right: nil,
	}
}

func treeValueCount(root *Node, target int) int {
	counter := 0

	if root == nil {
		return 0
	}

	stack := []*Node{root}

	for len(stack) > 0 {
		// take the top node from the stack
		curr := top(stack)

		// check the value for a match with target
		if curr.val == target {
			counter++
		}

		// pop the stack
		stack = pop(stack)

		// push child nodes onto the stack in DFS order, right then left
		if curr.right != nil {
			stack = append(stack, curr.right)
		}

		if curr.left != nil {
			stack = append(stack, curr.left)
		}
	}

	return counter
}

func top(stack []*Node) *Node {
	return stack[len(stack)-1]
}

func pop(stack []*Node) []*Node {
	return stack[:len(stack)-1]
}
