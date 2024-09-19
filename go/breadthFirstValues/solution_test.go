package solution

import (
	"slices"
	"testing"
)

func TestBreadthFirstValues(t *testing.T) {
	testCases := []struct {
		name string
		root *Node
		want []string
	}{
		{
			name: "test case one",
			root: nil,
			want: []string{},
		},
		{
			name: "test case two",
			root: &Node{val: "a"},
			want: []string{"a"},
		},
		{
			name: "test case three",
			root: &Node{
				val: "a",
				left: &Node{
					val:   "b",
					left:  &Node{val: "d"},
					right: &Node{val: "e"},
				},
				right: &Node{
					val:  "c",
					left: &Node{val: "f"},
				},
			},
			want: []string{"a", "b", "c", "d", "e", "f"},
		},
		{
			name: "test case four",
			root: &Node{
				val: "a",
				left: &Node{
					val:   "b",
					left:  &Node{val: "d"},
					right: &Node{val: "e"},
				},
				right: &Node{
					val:   "c",
					right: &Node{val: "f"},
				},
			},
			want: []string{"a", "b", "c", "d", "e", "f"},
		},
		{
			name: "test case five",
			root: &Node{
				val: "a",
				right: &Node{
					val: "b",
					right: &Node{
						val:   "c",
						right: &Node{val: "d"},
					},
				},
			},
			want: []string{"a", "b", "c", "d"},
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := breadthFirstValues(tc.root)

			if !slices.Equal(got, tc.want) {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
