package dev.jgn;

public class Solution {
    public static int maxValue(Integer[] numbers) {
        var max = Integer.MIN_VALUE;

        for (var num: numbers) {
            if (num > max) {
                max = num;
            }
        }

        return max;
    }
}
