package solution

import "core:testing"

@(test)
test_case_one :: proc(t: ^testing.T) {
    nums := []int{4, 7, 2, 8, 10, 9}
    expected := 10
    result := max_value(nums)

    testing.expect(t, result == expected, "max value should be 10")
}

@(test)
test_case_two :: proc(t: ^testing.T) {
    nums := []int{10, 5, 40, 42}
    expected := 42
    result := max_value(nums)

    testing.expect(t, result == expected, "max value should be 42")
}

@(test)
test_case_three :: proc(t: ^testing.T) {
    nums := []int{-5, -2, -1, -11}
    expected := -1
    result := max_value(nums)

    testing.expect(t, result == expected, "max value should be -1")
}

@(test)
test_case_four :: proc(t: ^testing.T) {
    nums := []int{42}
    expected := 42
    result := max_value(nums)

    testing.expect(t, result == expected, "max value should be 42")
}

@(test)
test_case_five :: proc(t: ^testing.T) {
    nums := []int{1000, 8}
    expected := 1000
    result := max_value(nums)

    testing.expect(t, result == expected, "max value should be 1000")
}

@(test)
test_case_six :: proc(t: ^testing.T) {
    nums := []int{1000, 8, 9000}
    expected := 9000
    result := max_value(nums)

    testing.expect(t, result == expected, "max value should be 9000")
}

@(test)
test_case_seven :: proc(t: ^testing.T) {
    nums := []int{2, 5, 1, 1, 4}
    expected := 5
    result := max_value(nums)

    testing.expect(t, result == expected, "max value should be 5")
}