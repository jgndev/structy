package pairproduct

func pairProduct(nums []int, target int) []int {
	n := len(nums)
	complements := make(map[int]int, n)

	for i := 0; i < n; i++ {
		num := nums[i]
		complement := target / num

		if v, ok := complements[complement]; ok {
			return []int{v, i}
		}

		complements[num] = i
	}

	return []int{}
}
