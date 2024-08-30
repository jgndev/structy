package solution

import (
	"slices"
	"testing"
)

// Helper function to create a linked list from a slice of integers
func createLinkedList(values []int) *Node {
	if len(values) == 0 {
		return nil
	}

	head := NewNode(values[0])
	current := head

	for _, v := range values[1:] {
		current.next = NewNode(v)
		current = current.next
	}

	return head
}

// Helper function to convert a linked list back to a slice of integers
func linkedListcoSlice(head *Node) []int {
	var result []int

	for current := head; current != nil; current = current.next {
		result = append(result, current.val)
	}

	return result
}

func TestZipperLists(t *testing.T) {
	testCases := []struct {
		name  string
		list1 []int
		list2 []int
		want  []int
	}{
		{
			name:  "test case one",
			list1: []int{1, 3, 5},
			list2: []int{2, 4, 6},
			want:  []int{1, 2, 3, 4, 5, 6},
		},
		{
			name:  "test case two",
			list1: []int{1, 3, 5, 7, 9},
			list2: []int{2, 4, 6},
			want:  []int{1, 2, 3, 4, 5, 6, 7, 9},
		},
		{
			name:  "test case three",
			list1: []int{1, 3},
			list2: []int{2, 4, 6, 8, 10},
			want:  []int{1, 2, 3, 4, 6, 8, 10},
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			// Create linked lists from the input slices
			head1 := createLinkedList(tc.list1)
			head2 := createLinkedList(tc.list2)

			// Call the function under test
			result := zipperLists(head1, head2)

			// Convert the result back to a slice for easy comparison
			resultSlice := linkedListcoSlice(result)

			// Compare the result with the want output
			if !slices.Equal(resultSlice, tc.want) {
				t.Errorf("zipperLists() = %v, want %v", resultSlice, tc.want)
			}
		})
	}
}
