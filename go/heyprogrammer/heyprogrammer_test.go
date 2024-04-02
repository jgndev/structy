package heyprogrammer

import "testing"

func TestGreet(t *testing.T) {
	testCases := []struct {
		name     string
		input    string
		expected string
	}{
		{"test case one", "Jeremy", "hey Jeremy"},
		{"test case two", "Alvin", "hey Alvin"},
		{"test case three", "Jason", "hey Jason"},
		{"test case four", "now brown cow", "hey now brown cow"},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := greet(tc.input)
			if got != tc.expected {
				t.Errorf("got %v, want %v", got, tc.expected)
			}
		})
	}
}
