class Solution:

    def longest_word(self, sentence):
        words = sentence.split(" ")
        longest = ""

        for word in words:
            if len(word) >= len(longest):
                longest = word

        return longest
