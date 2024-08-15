package pairproduct

import (
	"slices"
	"testing"
)

func TestPairProduct(t *testing.T) {
	testCases := []struct {
		name   string
		nums   []int
		target int
		want   []int
	}{
		{"test case one", []int{3, 2, 5, 4, 1}, 8, []int{1, 3}},
		{"test case two", []int{3, 2, 5, 4, 1}, 10, []int{1, 2}},
		{"test case three", []int{4, 7, 9, 2, 5, 1}, 5, []int{4, 5}},
		{"test case four", []int{4, 7, 9, 2, 5, 1}, 35, []int{1, 4}},
		{"test case five", []int{3, 2, 5, 4, 1}, 10, []int{1, 2}},
		{"test case six", []int{4, 6, 8, 2}, 16, []int{2, 3}},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := pairProduct(tc.nums, tc.target)

			if !slices.Equal(got, tc.want) {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
