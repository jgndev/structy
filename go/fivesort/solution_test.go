package solution

import (
	"slices"
	"testing"
)

func TestFiveSort(t *testing.T) {
	testCases := []struct {
		name    string
		numbers []int
		want    []int
	}{
		{"test case one", []int{12, 5, 1, 5, 12, 7}, []int{12, 7, 1, 12, 5, 5}},
		{"test case two", []int{5, 2, 5, 6, 5, 1, 10, 2, 5, 5}, []int{2, 2, 10, 6, 1, 5, 5, 5, 5, 5}},
		{"test case three", []int{5, 5, 5, 1, 1, 1, 4}, []int{4, 1, 1, 1, 5, 5, 5}},
		{"test case four", []int{5, 1, 2, 5, 5, 3, 2, 5, 1, 5, 5, 5, 4, 5}, []int{4, 1, 2, 1, 2, 3, 5, 5, 5, 5, 5, 5, 5, 5}},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := fiveSort(tc.numbers)

			if !slices.Equal(got, tc.want) {
				t.Errorf("got %v, want %v\n", got, tc.want)
			}
		})
	}
}
