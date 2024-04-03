public class Solution {

    public double maxValue(double[] numbers) {
        var max = Double.NEGATIVE_INFINITY;

        for (double number : numbers) {
            if (number > max) {
                max = number;
            }
        }

        return max;
    }
}
