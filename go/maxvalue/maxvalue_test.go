package maxvalue

import "testing"

func TestMaxValue(t *testing.T) {
	testCases := []struct {
		name     string
		numbers  []float64
		expected float64
	}{
		{"test case one", []float64{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, 9},
		{"test case two", []float64{4, 7, 2, 8, 10, 9}, 10},
		{"test case three", []float64{10, 5, 40, 40.3}, 40.3},
		{"test case four", []float64{-5, -2, -1, -1}, -1},
		{"test case five", []float64{42}, 42},
		{"test case six", []float64{1000, 8}, 1000},
		{"test case seven", []float64{1000, 8, 9000}, 9000},
		{"test case eight", []float64{2, 5, 1, 1, 4}, 5},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			result := maxValue(tc.numbers)

			if result != tc.expected {
				t.Errorf("got %g, want %g", result, tc.expected)
			}
		})
	}
}
