package solution

import "core:math"

MIN_i32_VALUE :: -2_147_483_648

max_value :: proc(nums: []int) -> int {
    if len(nums) <=0 {
        return 0
    }

    max := MIN_i32_VALUE

    for num in nums {
        if num > max {
            max = num
        }
    }

    return max
}