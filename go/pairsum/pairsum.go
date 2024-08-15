package pairsum

func pairSum(nums []int, target int) []int {
	complements := make(map[int]int, len(nums))

	for i, num := range nums {
		complement := target - num

		if v, ok := complements[complement]; ok {
			return []int{v, i}
		}

		complements[num] = i
	}

	return []int{-1, -1}
}
