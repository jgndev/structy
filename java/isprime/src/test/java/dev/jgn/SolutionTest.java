package dev.jgn;

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class SolutionTest {

    @Test
    void testIsPrime() {
        assertTrue(Solution.isPrime(2));
        assertTrue(Solution.isPrime(3));
        assertFalse(Solution.isPrime(4));
        assertTrue(Solution.isPrime(5));
        assertFalse(Solution.isPrime(6));
        assertTrue(Solution.isPrime(7));
        assertFalse(Solution.isPrime(8));
        assertFalse(Solution.isPrime(25));
        assertTrue(Solution.isPrime(31));
        assertTrue(Solution.isPrime(2017));
        assertFalse(Solution.isPrime(2048));
        assertFalse(Solution.isPrime(1));
        assertFalse(Solution.isPrime(713));
    }
}
