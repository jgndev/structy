package dev.jgn;

import org.junit.jupiter.api.Test;

import java.util.Arrays;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class SolutionTest {

    @Test
    void testCaseOne() {
        var solution = new Solution();
        var n = 11;
        var result = solution.fizzBuzz(n);
        var expected = Arrays.asList(1, 2, "fizz", 4, "buzz", "fizz", 7, 8, "fizz", "buzz", 11);
        assertEquals(expected, result);
    }

    @Test
    void testCaseTwo() {
        var solution = new Solution();
        var n = 2;
        var result = solution.fizzBuzz(n);
        var expected = Arrays.asList(1, 2);
        assertEquals(expected, result);
    }

    @Test
    void testCaseThree() {
        var solution = new Solution();
        var n = 16;
        var result = solution.fizzBuzz(n);
        var expected = Arrays.asList(1, 2, "fizz", 4, "buzz", "fizz", 7, 8, "fizz", "buzz", 11, "fizz", 13, 14, "fizzbuzz", 16);
        assertEquals(expected, result);
    }

    @Test
    void testCaseFour() {
        var solution = new Solution();
        var n = 32;
        var result = solution.fizzBuzz(n);
        var expected = Arrays.asList(
                1,
                2,
                "fizz",
                4,
                "buzz",
                "fizz",
                7,
                8,
                "fizz",
                "buzz",
                11,
                "fizz",
                13,
                14,
                "fizzbuzz",
                16,
                17,
                "fizz",
                19,
                "buzz",
                "fizz",
                22,
                23,
                "fizz",
                "buzz",
                26,
                "fizz",
                28,
                29,
                "fizzbuzz",
                31,
                32
        );
        assertEquals(expected, result);
    }
}
