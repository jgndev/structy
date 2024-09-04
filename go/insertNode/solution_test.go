package solution

import "testing"

func TestInsertNode(t *testing.T) {
	testCases := []struct {
		name    string
		initial []string
		value   string
		idx     int
		want    []string
	}{
		{
			name:    "test case one",
			initial: []string{"b", "c"},
			value:   "a",
			idx:     0,
			want:    []string{"a", "b", "c"},
		},
		{
			name:    "test case two",
			initial: []string{"a", "c"},
			value:   "b",
			idx:     1,
			want:    []string{"a", "b", "c"},
		},
		{
			name:    "test case three",
			initial: []string{"a", "b"},
			value:   "c",
			idx:     2,
			want:    []string{"a", "b", "c"},
		},
		{
			name:    "test case four",
			initial: []string{"a", "b"},
			value:   "c",
			idx:     5,
			want:    []string{"a", "b"},
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			// Create initial linked list
			var head *Node

			for i := len(tc.initial) - 1; i >= 0; i-- {
				head = &Node{val: tc.initial[i], next: head}
			}

			// Perform insertion
			head = insertNode(head, tc.value, tc.idx)

			// Check result
			curr := head

			for _, want := range tc.want {
				if curr == nil || curr.val != want {
					t.Errorf("want %s, got %v", want, curr)
					return
				}
				curr = curr.next
			}

			if curr != nil {
				t.Errorf("Linked list is longer than expected")
			}
		})
	}
}
