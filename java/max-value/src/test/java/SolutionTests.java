import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class SolutionTests {

    @Test
    public void TestCaseOne() {
        Solution solution = new Solution();
        var numbers = new double[] {2, 7, 11, 44, 99};
        var result = solution.maxValue(numbers);
        var expected = 99;
        assertEquals(result, expected);
    }

    @Test
    public void TestCaseTwo() {
        Solution solution = new Solution();
        var numbers = new double[] {4, 7, 2, 8, 10, 9};
        var result = solution.maxValue(numbers);
        var expected = 10;
        assertEquals(result, expected);
    }

    @Test
    public void TestCaseThree() {
        Solution solution = new Solution();
        var numbers = new double[] {10, 5, 40, 40.3};
        var result = solution.maxValue(numbers);
        var expected = 40.3;
        assertEquals(result, expected);
    }

    @Test
    public void TestCaseFour() {
        Solution solution = new Solution();
        var numbers = new double[] {-5, -2, -1, -11};
        var result = solution.maxValue(numbers);
        var expected = -1;
        assertEquals(result, expected);
    }

    @Test
    public void TestCaseFive() {
        Solution solution = new Solution();
        var numbers = new double[] {42};
        var result = solution.maxValue(numbers);
        var expected = 42;
        assertEquals(result, expected);
    }

    @Test
    public void TestCaseSix() {
        Solution solution = new Solution();
        var numbers = new double[] {1000, 8};
        var result = solution.maxValue(numbers);
        var expected = 1000;
        assertEquals(result, expected);
    }

    @Test
    public void TestCaseSeven() {
        Solution solution = new Solution();
        var numbers = new double[] {1000, 8, 9000};
        var result = solution.maxValue(numbers);
        var expected = 9000;
        assertEquals(result, expected);
    }

    @Test
    public void TestCaseEight() {
        Solution solution = new Solution();
        var numbers = new double[] {2, 5, 1, 1, 4};
        var result = solution.maxValue(numbers);
        var expected = 5;
        assertEquals(result, expected);
    }
}
