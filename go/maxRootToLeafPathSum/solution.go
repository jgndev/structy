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

func dfs(node *Node) int {
	if node == nil {
		return math.MinInt
	}

	if node.left == nil && node.right == nil {
		return node.val
	}

	leftMax := dfs(node.left)
	rightMax := dfs(node.right)

	return max(leftMax, rightMax) + node.val
}

func maxPathSum(root *Node) int {
	return dfs(root)
}
