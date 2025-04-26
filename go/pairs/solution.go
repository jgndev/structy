package solution

func pairs(elements []string) [][]string {
	result := [][]string{}

	for i := 0; i < len(elements); i++ {
		for j := i + 1; j < len(elements); j++ {
			pair := []string{elements[i], elements[j]}
			result = append(result, pair)
		}
	}

	return result
}
