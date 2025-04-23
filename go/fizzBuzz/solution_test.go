package solution

import (
	"slices"
	"testing"
)

func TestFizzBuzz(t *testing.T) {
	testCases := []struct {
		name string
		n    int
		want []interface{}
	}{
		{"test case one", 11, []interface{}{1, 2, "fizz", 4, "buzz", "fizz", 7, 8, "fizz", "buzz", 11}},
		{"test case two", 2, []interface{}{1, 2}},
		{"test case three", 16, []interface{}{1, 2, "fizz", 4, "buzz", "fizz", 7, 8, "fizz", "buzz", 11, "fizz", 13, 14, "fizzbuzz", 16}},
		{"test case four", 32, []interface{}{1, 2, "fizz", 4, "buzz", "fizz", 7, 8, "fizz", "buzz", 11, "fizz", 13, 14, "fizzbuzz", 16, 17, "fizz", 19, "buzz", "fizz", 22, 23, "fizz", "buzz", 26, "fizz", 28, 29, "fizzbuzz", 31, 32}},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := fizzBuzz(tc.n)

			if !slices.Equal(got, tc.want) {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
