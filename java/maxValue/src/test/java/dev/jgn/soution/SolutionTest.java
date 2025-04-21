package dev.jgn.soution;

import dev.jgn.solution.Solution;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.assertEquals;

public class SolutionTest {

    @Test
    void testCaseOne() {
        var solution = new Solution();
        var nums = new int[]{4, 7, 2, 8, 10, 9};
        var result = solution.maxValue(nums);
        var expected = 10;
        assertEquals(expected, result);
    }

    @Test
    void testCaseTwo() {
        var solution = new Solution();
        var nums = new int[]{10, 5, 40, 42};
        var result = solution.maxValue(nums);
        var expected = 42;
        assertEquals(expected, result);
    }

    @Test
    void testCaseThree() {
        var solution = new Solution();
        var nums = new int[]{-5, -2, -1, -11};
        var result = solution.maxValue(nums);
        var expected = -1;
        assertEquals(expected, result);
    }

    @Test
    void testCaseFour() {
        var solution = new Solution();
        var nums = new int[]{42};
        var result = solution.maxValue(nums);
        var expected = 42;
        assertEquals(expected, result);
    }

    @Test
    void testCaseFive() {
        var solution = new Solution();
        var nums = new int[]{1000, 8};
        var result = solution.maxValue(nums);
        var expected = 1000;
        assertEquals(expected, result);
    }

    @Test
    void testCaseSix() {
        var solution = new Solution();
        var nums = new int[]{1000, 8, 9000};
        var result = solution.maxValue(nums);
        var expected = 9000;
        assertEquals(expected, result);
    }

    @Test
    void testCaseSeven() {
        var solution = new Solution();
        var nums = new int[]{2, 5, 1, 1, 4};
        var result = solution.maxValue(nums);
        var expected = 5;
        assertEquals(expected, result);
    }

}
