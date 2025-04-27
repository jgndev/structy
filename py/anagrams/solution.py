class Solution:

    def anagrams(self, s1, s2):
        return self.char_count(s1) == self.char_count(s2)


    @staticmethod
    def char_count(s):
        count = {}

        for char in s:
            if char not in count:
                count[char] = 0

            count[char] += 1

        return count


