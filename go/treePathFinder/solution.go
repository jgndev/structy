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

func findPath(root *Node, target string, path *[]string) bool {
	if root == nil {
		return false
	}

	*path = append(*path, root.val)

	if root.val == target {
		return true
	}

	if findPath(root.left, target, path) || findPath(root.right, target, path) {
		return true
	}

	*path = (*path)[:len(*path)-1]
	return false
}

func pathFinder(root *Node, target string) []string {
	var path []string

	if findPath(root, target, &path) {
		return path
	}

	return nil
}
