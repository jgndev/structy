package solution

import (
	"reflect"
	"testing"
)

func TestPairs(t *testing.T) {
	testCases := []struct {
		name     string
		elements []string
		want     [][]string
	}{
		{
			name:     "test case one",
			elements: []string{"a", "b", "c"},
			want: [][]string{
				{"a", "b"},
				{"a", "c"},
				{"b", "c"},
			},
		},
		{
			name:     "test case two",
			elements: []string{"a", "b", "c", "d"},
			want: [][]string{
				{"a", "b"},
				{"a", "c"},
				{"a", "d"},
				{"b", "c"},
				{"b", "d"},
				{"c", "d"},
			},
		},
		{
			name:     "test_case_three",
			elements: []string{"cherry", "cranberry", "banana", "blueberry", "lime", "papaya"},
			want: [][]string{
				{"cherry", "cranberry"},
				{"cherry", "banana"},
				{"cherry", "blueberry"},
				{"cherry", "lime"},
				{"cherry", "papaya"},
				{"cranberry", "banana"},
				{"cranberry", "blueberry"},
				{"cranberry", "lime"},
				{"cranberry", "papaya"},
				{"banana", "blueberry"},
				{"banana", "lime"},
				{"banana", "papaya"},
				{"blueberry", "lime"},
				{"blueberry", "papaya"},
				{"lime", "papaya"},
			},
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := pairs(tc.elements)
			if !reflect.DeepEqual(got, tc.want) {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
