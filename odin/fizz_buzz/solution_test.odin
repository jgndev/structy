package solution

import "core:testing"
import "core:slice"

@(test)
test_case_one :: proc(t: ^testing.T) {
    n := 11
    expected := []string{"1", "2", "fizz", "4", "buzz", "fizz", "7", "8", "fizz", "buzz", "11"}
    result := fizz_buzz(n)
    defer delete(result)

    testing.expect(t, slice.equal(expected, result), "result is not equal to expected") 
}

@(test)
test_case_two :: proc(t: ^testing.T) {
    n := 2
    expected := []string{"1", "2"}
    result := fizz_buzz(n)
    defer delete(result)

    testing.expect(t, slice.equal(expected, result), "result is not equal to expected")
}

@(test)
test_case_three :: proc(t: ^testing.T) {
    n := 16
    expected := []string{"1", "2", "fizz", "4", "buzz", "fizz", "7", "8", "fizz", "buzz", "11", "fizz", "13", "14", "fizzbuzz", "16"}
    result := fizz_buzz(n)
    defer delete(result)

    testing.expect(t, slice.equal(expected, result), "result is not equal to expected")
}

@(test)
test_case_four :: proc(t: ^testing.T) {
    n := 32
    expected := []string{"1", "2", "fizz", "4", "buzz", "fizz", "7", "8", "fizz", "buzz", "11", "fizz", "13", "14", "fizzbuzz", "16", "17", "fizz", "19", "buzz", "fizz", "22", "23", "fizz", "buzz", "26", "fizz", "28", "29", "fizzbuzz", "31", "32"}
    result := fizz_buzz(n)
    defer delete(result)

    testing.expect(t, slice.equal(expected, result), "result is not equal to expected")
}