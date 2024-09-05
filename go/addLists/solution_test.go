package solution

import (
	"slices"
	"testing"
)

// helper function to create a linked list from a slice of int
func createList(values []int) *Node {
	dummy := &Node{}
	curr := dummy

	for _, val := range values {
		curr.next = NewNode(val)
		curr = curr.next
	}

	return dummy.next
}

// helper function to convert a linked list into a slice of int
func listToSlice(head *Node) []int {
	var result []int

	for head != nil {
		result = append(result, head.val)
		head = head.next
	}

	return result
}

func TestAddLists(t *testing.T) {
	testCases := []struct {
		name  string
		list1 []int
		list2 []int
		want  []int
	}{
		{
			name:  "test case one",
			list1: []int{1, 2, 3}, // 321
			list2: []int{4, 5, 6}, // 654
			want:  []int{5, 7, 9}, // 975
		},
		{
			name:  "test case two",
			list1: []int{1, 2, 3}, // 321
			list2: []int{4, 5},    // 54
			want:  []int{5, 7, 3}, // 375
		},
		{
			name:  "test case three",
			list1: []int{9, 9, 9}, // 999
			list2: []int{1},       // 1
			want:  []int{0, 0, 0, 1},
		},
		{
			name:  "test case four",
			list1: []int{1, 2, 3}, // 321
			list2: []int{},
			want:  []int{1, 2, 3}, // 321
		},
		{
			name:  "test case five",
			list1: []int{},
			list2: []int{},
			want:  []int{},
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			l1 := createList(tc.list1)
			l2 := createList(tc.list2)
			got := addLists(l1, l2)
			gotSlice := listToSlice(got)

			if !slices.Equal(gotSlice, tc.want) {
				t.Errorf("got %v, want %v", got, tc.want)
			}

		})
	}
}
