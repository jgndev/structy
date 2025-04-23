package dev.jgn;

import java.util.ArrayList;
import java.util.List;

public class Solution {

    public List<Object> fizzBuzz(int n) {

        var results = new ArrayList<Object>();

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
               results.add("fizzbuzz");
            } else if (i % 5 == 0) {
                results.add("buzz");
            } else if (i % 3 == 0) {
                results.add("fizz");
            } else {
                results.add(i);
            }
        }

        return results;
    }
}
