package solution

import (
	"testing"
)

// Helper function to create a linked list from a slice of integers
func createList(values []int) *Node {
	dummy := &Node{}
	curr := dummy

	for _, val := range values {
		curr.next = NewNode(val)
		curr = curr.next
	}

	return dummy.next
}

// Helper function to convert a linked list to a slice of integers
func listcoSlice(head *Node) []int {
	var result []int

	for curr := head; curr != nil; curr = curr.next {
		result = append(result, curr.val)
	}

	return result
}

func TestMergeLists(t *testing.T) {
	testCases := []struct {
		name  string
		list1 []int
		list2 []int
		want  []int
	}{
		{
			name:  "test case one",
			list1: []int{5, 7, 10, 12, 20, 28},
			list2: []int{6, 8, 9, 25},
			want:  []int{5, 6, 7, 8, 9, 10, 12, 20, 25, 28},
		},
		{
			name:  "test case two",
			list1: []int{1, 3, 5},
			list2: []int{2, 4, 6},
			want:  []int{1, 2, 3, 4, 5, 6},
		},
		{
			name:  "test case three",
			list1: []int{1, 2, 3},
			list2: []int{},
			want:  []int{1, 2, 3},
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			list1 := createList(tc.list1)
			list2 := createList(tc.list2)

			result := mergeLists(list1, list2)

			resultSlice := listcoSlice(result)

			if len(resultSlice) != len(tc.want) {
				t.Errorf("want length %d, but got %d", len(tc.want), len(resultSlice))
			}

			for i := range tc.want {
				if i >= len(resultSlice) || resultSlice[i] != tc.want[i] {
					t.Errorf("At index %d, want %d, but got %d", i, tc.want[i], resultSlice[i])
				}
			}
		})
	}
}
