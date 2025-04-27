package solution

import "testing"

func TestAnagrams(t *testing.T) {
	testCases := []struct {
		name string
		s1   string
		s2   string
		want bool
	}{
		{"test case one", "monkeyswrite", "newyorktimes", true},
		{"test case two", "anagram", "nagaram", true},
		{"test case three", "car", "arc", true},
		{"test case four", "cats", "cots", false},
		{"test case five", "bubba", "bubbu", false},
		{"test case six", "pets", "steps", false},
		{"test case seven", "restful", "fluster", true},
		{"test case eight", "paper", "reapa", false},
		{"test case nine", "elbow", "below", true},
		{"test case ten", "night", "thing", true},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := anagrams(tc.s1, tc.s2)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
