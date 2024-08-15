package mostfreqchar

func mostFreqChar(s string) rune {
	count := make(map[rune]int)

	for _, v := range s {
		count[v]++
	}

	var best rune = '*'

	for _, v := range s {
		current := rune(v)
		if best == '*' || count[current] > count[best] {
			best = current
		}
	}

	return best
}
