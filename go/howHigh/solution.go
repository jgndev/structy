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

func howHigh(root *Node) int {
	// base case:
	if root == nil {
		return -1
	}

	return 1 + max(howHigh(root.left), howHigh(root.right))
}
