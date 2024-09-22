package solution

import "math"

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

func treeMinValue(root *Node) int {
	if root == nil {
		return 0
	}

	stack := []*Node{root}

	minVal := math.MaxInt

	for len(stack) > 0 {
		// top of the stack
		curr := stack[len(stack)-1]
		// pop the stack
		stack = stack[:len(stack)-1]

		if curr.val < minVal {
			minVal = curr.val
		}

		// dfs order, right then left
		if curr.right != nil {
			stack = append(stack, curr.right)
		}

		if curr.left != nil {
			stack = append(stack, curr.left)
		}

	}

	return minVal
}
