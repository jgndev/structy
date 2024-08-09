package dev.jgn;

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class SolutionTest {

    @Test
    void TestCaseOne() {
        var numbers = new Integer[]{4, 7, 2, 8, 10, 9};
        var expected = 10;
        var result = Solution.maxValue(numbers);
        assertEquals(expected, result);
    }

    @Test
    void TestCaseTwo() {
        var numbers = new Integer[]{10, 5, 40, 42};
        var expected = 42;
        var result = Solution.maxValue(numbers);
        assertEquals(expected, result);
    }

    @Test
    void TestCaseThree() {
        var numbers = new Integer[]{-5, -2, -1, -11};
        var expected = -1;
        var result = Solution.maxValue(numbers);
        assertEquals(expected, result);
    }

    @Test
    void TestCaseFour() {
        var numbers = new Integer[]{42};
        var expected = 42;
        var result = Solution.maxValue(numbers);
        assertEquals(expected, result);
    }

    @Test
    void TestCaseFive() {
        var numbers = new Integer[]{1000, 8};
        var expected = 1000;
        var result = Solution.maxValue(numbers);
        assertEquals(expected, result);
    }

    @Test
    void TestCaseSix() {
        var numbers = new Integer[]{1000, 8, 9000};
        var expected = 9000;
        var result = Solution.maxValue(numbers);
        assertEquals(expected, result);
    }

    @Test
    void TestCaseSeven() {
       var numbers = new Integer[]{2, 5, 1, 1, 4};
       var expected = 5;
       var result = Solution.maxValue(numbers);
       assertEquals(expected, result);
    }

    @Test
    void TestCaseEight() {
        var numbers = new Integer[]{1, 1, 1, 1, 1, 1};
        var expected = 1;
        var result = Solution.maxValue(numbers);
        assertEquals(expected, result);
    }
}
