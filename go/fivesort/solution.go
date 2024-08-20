package solution

func fiveSort(numbers []int) []int {
	left := 0
	right := len(numbers) - 1

	for left < right {
		if numbers[left] == 5 {
			for numbers[right] == 5 {
				right--
			}

			numbers[left], numbers[right] = numbers[right], numbers[left]
			right--
		}

		left++
	}

	return numbers
}
