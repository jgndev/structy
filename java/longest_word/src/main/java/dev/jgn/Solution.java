package dev.jgn;

public class Solution {

    public String longestWord(String sentence) {
        var words = sentence.split(" ");
        var longest = "";

        for (var word : words) {
            if (word.length() >= longest.length()) {
               longest = word;
            }
        }

        return longest;
    }
}
