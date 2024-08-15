package pairsum

import (
	"slices"
	"testing"
)

func TestPairSum(t *testing.T) {
	testCases := []struct {
		name   string
		nums   []int
		target int
		want   []int
	}{
		{"test case one", []int{3, 2, 5, 4, 1}, 8, []int{0, 2}},
		{"test case two", []int{4, 7, 9, 2, 5, 1}, 5, []int{0, 5}},
		{"test case three", []int{4, 7, 9, 2, 5, 1}, 3, []int{3, 5}},
		{"test case four", []int{1, 6, 7, 2}, 13, []int{1, 2}},
		{"test case five", []int{9, 9}, 18, []int{0, 1}},
		{"test case six", []int{6, 4, 2, 8}, 12, []int{1, 3}},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := pairSum(tc.nums, tc.target)

			if !slices.Equal(got, tc.want) {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
