package dev.jgn;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class SolutionTest {
    Solution solution = new Solution();

    @Test
    public void testCaseOne() {
        var sentence = "what a wonderful world";
        var expected = "wonderful";
        var result = solution.longestWord(sentence);

        assertEquals(expected, result);
    }

    @Test
    public void testCaseTwo() {
        var sentence = "have a nice day";
        var expected = "nice";
        var result = solution.longestWord(sentence);

        assertEquals(expected, result);
    }

    @Test
    public void testCaseThree() {
        var sentence = "the quick brown fox jumped over the lazy dog";
        var expected = "jumped";
        var result = solution.longestWord(sentence);

        assertEquals(expected, result);
    }

    @Test
    public void testCaseFour() {
        var sentence = "who did eat the ham";
        var expected = "ham";
        var result = solution.longestWord(sentence);

        assertEquals(expected, result);
    }

    @Test
    public void testCaseFive() {
        var sentence = "potato";
        var expected = "potato";
        var result = solution.longestWord(sentence);

        assertEquals(expected, result);
    }
}
