import unittest
from solution import Solution

class TestLongestWord(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_case_one(self):
        words = "what a wonderful world"
        expected = "wonderful"
        result = self.solution.longest_word(words)
        self.assertEqual(result, expected)

    def test_case_two(self):
        words = "have a nice day"
        expected = "nice"
        result = self.solution.longest_word(words)
        self.assertEqual(result, expected)

    def test_case_three(self):
        words = "the quick brown fox jumped over the lazy  dog"
        expected = "jumped"
        result = self.solution.longest_word(words)
        self.assertEqual(result, expected)

    def test_case_four(self):
        words = "who did eat the ham"
        expected = "ham"
        result = self.solution.longest_word(words)
        self.assertEqual(result, expected)

    def test_case_five(self):
        words = "potato"
        expected = "potato"
        result = self.solution.longest_word(words)
        self.assertEqual(result, expected)


