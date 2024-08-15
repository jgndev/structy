package mostfreqchar

import "testing"

func TestMostFrequentChar(t *testing.T) {
	testCases := []struct {
		name  string
		input string
		want  rune
	}{
		{"test case one", "bookkeeper", 'e'},
		{"test case two", "david", 'd'},
		{"test case three", "abby", 'b'},
		{"test case four", "mississippi", 'i'},
		{"test case five", "potato", 'o'},
		{"test case six", "eleventennine", 'e'},
		{"test case seven", "riverbed", 'r'},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := mostFreqChar(tc.input)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
