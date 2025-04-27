package solution

import "maps"

func anagrams(s1 string, s2 string) bool {
	if len(s1) != len(s2) {
		return false
	}

	return maps.Equal(runeCount(s1), runeCount(s2))
}

func runeCount(s string) map[rune]int {
	rc := make(map[rune]int)

	for _, ch := range s {
		rc[ch]++
	}

	return rc
}
