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

func treeSum(root *Node) int {
	if root == nil {
		return 0
	}

	stack := []*Node{root}
	sum := 0

	for len(stack) > 0 {
		// top
		curr := stack[len(stack)-1]
		sum += curr.val

		// pop
		stack = stack[:len(stack)-1]

		// dfs order, right before left
		if curr.right != nil {
			stack = append(stack, curr.right)
		}

		if curr.left != nil {
			stack = append(stack, curr.left)
		}
	}

	return sum
}
