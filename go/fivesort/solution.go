package solution

func fiveSort(numbers []int) []int {
	left := 0
	right := len(numbers) - 1

	for left < right {
		if numbers[left] == 5 {
			for numbers[right] == 5 {
				right--
			}

			tempL := numbers[left]
			tempR := numbers[right]

			numbers[left] = tempR
			numbers[right] = tempL
		}

		left++

	}

	return numbers
}
