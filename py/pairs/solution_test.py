import unittest

from solution import Solution


class TestSolution(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_case_one(self):
        elements = ["a", "b", "c"]
        expected = [
            ["a", "b"],
            ["a", "c"],
            ["b", "c"]
        ]
        result = self.solution.pairs(elements)
        self.assertListEqual(expected, result)

    def test_case_two(self):
        elements = ["a", "b", "c", "d"]
        expected = [
            ["a", "b"],
            ["a", "c"],
            ["a", "d"],
            ["b", "c"],
            ["b", "d"],
            ["c", "d"]
        ]
        result = self.solution.pairs(elements)
        self.assertListEqual(expected, result)

    def test_case_three(self):
        elements = ["cherry", "cranberry", "banana", "blueberry", "lime", "papaya"]
        expected = [
            ["cherry", "cranberry"],
            ["cherry", "banana"],
            ["cherry", "blueberry"],
            ["cherry", "lime"],
            ["cherry", "papaya"],
            ["cranberry", "banana"],
            ["cranberry", "blueberry"],
            ["cranberry", "lime"],
            ["cranberry", "papaya"],
            ["banana", "blueberry"],
            ["banana", "lime"],
            ["banana", "papaya"],
            ["blueberry", "lime"],
            ["blueberry", "papaya"],
            ["lime", "papaya"]
        ]
        result = self.solution.pairs(elements)
        self.assertListEqual(expected, result)
