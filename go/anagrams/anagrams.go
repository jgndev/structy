package anagrams

import "maps"

func runeCount(s string) map[rune]int {
	rc := make(map[rune]int)

	for _, ch := range s {
		rc[ch]++
	}

	return rc
}

func anagrams(s1, s2 string) bool {
	if len(s1) != len(s2) {
		return false
	}

	return maps.Equal(runeCount(s1), runeCount(s2))
}
