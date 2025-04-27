import unittest
from solution import Solution

class TestAnagram(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_case_one(self):
        s1 = "restful"
        s2 = "fluster"
        expected = True
        result = self.solution.anagrams(s1, s2)
        self.assertEqual(expected, result)

    def test_case_two(self):
        s1 = "cats"
        s2 = "tocs"
        expected = False
        result = self.solution.anagrams(s1, s2)
        self.assertEqual(expected, result)

    def test_case_three(self):
        s1 = "monkeyswrite"
        s2 = "newyorktimes"
        expected = True
        result = self.solution.anagrams(s1, s2)
        self.assertEqual(expected, result)

    def test_case_four(self):
        s1 = "paper"
        s2 = "reapa"
        expected = False
        result = self.solution.anagrams(s1, s2)
        self.assertEqual(expected, result)

    def test_case_five(self):
        s1 = "elbow"
        s2 = "below"
        expected = True
        result = self.solution.anagrams(s1, s2)
        self.assertEqual(expected, result)

    def test_case_eight(self):
        s1 = "night"
        s2 = "thing"
        expected = True
        result = self.solution.anagrams(s1, s2)
        self.assertEqual(expected, result)

    def test_case_nine(self):
        s1 = "abbc"
        s2 = "aabc"
        expected = False
        result = self.solution.anagrams(s1, s2)
        self.assertEqual(expected, result)

    def test_case_ten(self):
        s1 = "tax"
        s2 = "taxi"
        expected = False
        result = self.solution.anagrams(s1, s2)
        self.assertEqual(expected, result)