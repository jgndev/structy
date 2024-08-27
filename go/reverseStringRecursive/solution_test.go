package solution

import "testing"

func TestReverseString(t *testing.T) {
	testCases := []struct {
		name  string
		input string
		want  string
	}{
		{"test case one", "hello", "olleh"},
		{"test cae two", "abcdefg", "gfedcba"},
		{"test case three", "stopwatch", "hctawpots"},
		{"test case four", "", ""},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := reverseString(tc.input)

			if got != tc.want {
				t.Errorf("got %s, want %s", got, tc.want)
			}
		})
	}
}
