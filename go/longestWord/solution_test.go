package solution

import "testing"

func TestLongestWord(t *testing.T) {
	testCases := []struct {
		name     string
		sentence string
		want     string
	}{
		{"test case one", "what a wonderful world", "wonderful"},
		{"test case two", "have a nice day", "nice"},
		{"test case three", "the quick brown fox jumped over the lazy dog", "jumped"},
		{"test case four", "who did eat the ham", "ham"},
		{"test case five", "potato", "potato"},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := longestWord(tc.sentence)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
