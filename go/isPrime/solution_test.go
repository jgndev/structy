package solution

import "testing"

func TestIsPrime(t *testing.T) {
	testCases := []struct {
		name   string
		number int
		want   bool
	}{
		{"test case one", 2, true},
		{"test case two", 3, true},
		{"test case three", 4, false},
		{"test case four", 5, true},
		{"test case five", 6, false},
		{"test case six", 7, true},
		{"test case seven", 8, false},
		{"test case eight", 25, false},
		{"test case nine", 31, true},
		{"test case ten", 2017, true},
		{"test case eleven", 2048, false},
		{"test case twelve", 1, false},
		{"test case thirteen", 713, false},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := isPrime(tc.number)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
