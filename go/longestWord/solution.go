package solution

import "strings"

func longestWord(sentence string) string {
	// strings.Fields separates on any whitespace, not just spaces
	words := strings.Fields(sentence)
	longest := ""

	for _, word := range words {
		if len(word) >= len(longest) {
			longest = word
		}
	}

	return longest
}
