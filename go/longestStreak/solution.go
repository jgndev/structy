package solution

type Node struct {
	val  int
	next *Node
}

func NewNode(v int) *Node {
	return &Node{
		val:  v,
		next: nil,
	}
}

func longestStreak(head *Node) int {
	curr := head
	var prev *Node

	currStreak := 0
	longestStreak := 0

	for curr != nil {
		if prev == nil || curr.val == prev.val {
			currStreak++
		} else {
			currStreak = 1
		}

		if currStreak > longestStreak {
			longestStreak = currStreak
		}

		prev = curr
		curr = curr.next
	}

	return longestStreak
}
