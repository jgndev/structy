import unittest

from solution import anagrams


class TestAnagram(unittest.TestCase):

    def test_case_one(self):
        s1 = "restful"
        s2 = "fluster"
        result = anagrams(s1, s2)
        expected = True
        self.assertEqual(result, expected)

    def test_case_two(self):
        s1 = "cats"
        s2 = "tocs"
        result = anagrams(s1, s2)
        expected = False
        self.assertEqual(result, expected)

    def test_case_three(self):
        s1 = "monkeyswrite"
        s2 = "newyorktimes"
        result = anagrams(s1, s2)
        expected = True
        self.assertEqual(result, expected)

    def test_case_four(self):
        s1 = "paper"
        s2 = "reapa"
        result = anagrams(s1, s2)
        expected = False
        self.assertEqual(result, expected)

    def test_case_five(self):
        s1 = "elbow"
        s2 = "below"
        result = anagrams(s1, s2)
        expected = True
        self.assertEqual(result, expected)

    def test_case_six(self):
        s1 = "tax"
        s2 = "taxi"
        result = anagrams(s1, s2)
        expected = False
        self.assertEqual(result, expected)

    def test_case_seven(self):
        s1 = "taxi"
        s2 = "tax"
        result = anagrams(s1, s2)
        expected = False
        self.assertEqual(result, expected)

    def test_case_eight(self):
        s1 = "night"
        s2 = "thing"
        result = anagrams(s1, s2)
        expected = True
        self.assertEqual(result, expected)

    def test_case_nine(self):
        s1 = "abbc"
        s2 = "aabc"
        result = anagrams(s1, s2)
        expected = False
        self.assertEqual(result, expected)

    def test_case_ten(self):
        s1 = "po"
        s2 = "popp"
        result = anagrams(s1, s2)
        expected = False
        self.assertEqual(result, expected)
