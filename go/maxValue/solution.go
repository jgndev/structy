package solution

import "math"

func maxValue(nums []int) int {
	if len(nums) <= 0 {
		return 0
	}

	max := math.MinInt

	for _, num := range nums {
		if num > max {
			max = num
		}
	}

	return max
}
