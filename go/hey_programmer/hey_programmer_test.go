package hey_programmer

import "testing"

func TestHeyProgrammer(t *testing.T) {
	testCases := []struct {
		name  string
		input string
		want  string
	}{
		{"test case one", "programmer", "hey programmer"},
		{"test case two", "alvin", "hey alvin"},
		{"test case three", "jason", "hey jason"},
		{"test case four", "how now brown cow", "hey how now brown cow"},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := hey(tc.input)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
