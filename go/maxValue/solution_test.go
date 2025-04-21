package solution

import "testing"

func TestMaxValue(t *testing.T) {
	testCases := []struct {
		name  string
		input []int
		want  int
	}{
		{"test case one", []int{4, 7, 2, 8, 10, 9}, 10},
		{"test case two", []int{10, 5, 40, 42}, 42},
		{"test case three", []int{-5, -2, -1, -11}, -1},
		{"test case four", []int{42}, 42},
		{"test case five", []int{1000, 8}, 1000},
		{"test case six", []int{1000, 8, 9000}, 9000},
		{"test case seven", []int{2, 5, 1, 1, 4}, 5},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := maxValue(tc.input)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
