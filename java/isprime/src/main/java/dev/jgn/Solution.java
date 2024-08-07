package dev.jgn;

public class Solution {
    public static boolean isPrime(int number) {
        if (number < 2) {
            return false;
        }

        var sqrtNumber = (int)Math.sqrt(number);

        for (int i = 2; i <= sqrtNumber; i++) {
            if (number % i == 0) {
                return false;
            }
        }

        return true;
    }
}