package dev.jgn.solution;

public class Solution {

    public int maxValue(int[] nums) {
        var max = Integer.MIN_VALUE;

        for (int num : nums) {
            if (num > max) {
                max = num;
            }
        }

        return max;
    }
}
