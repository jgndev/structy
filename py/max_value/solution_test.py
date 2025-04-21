import unittest
from solution import Solution

class TestMaxValue(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_case_one(self):
        nums = [4, 7, 2, 8, 10, 9]
        expected = 10
        result = self.solution.max_value(nums)
        self.assertEqual(result, expected)

    def test_case_two(self):
        nums = [10, 5, 40, 40.3]
        expected = 40.3
        result = self.solution.max_value(nums)
        self.assertEqual(result, expected)

    def test_case_three(self):
        nums = [-5, -2, -1, -11]
        expected = -1
        result = self.solution.max_value(nums)
        self.assertEqual(result, expected)

    def test_case_four(self):
        nums = [42]
        expected = 42
        result = self.solution.max_value(nums)
        self.assertEqual(result, expected)

    def test_case_five(self):
        nums = [1000, 8]
        expected = 1000
        result = self.solution.max_value(nums)
        self.assertEqual(result, expected)

    def test_case_six(self):
        nums = [1000, 8, 9000]
        expected = 9000
        result = self.solution.max_value(nums)
        self.assertEqual(result, expected)

    def test_case_seven(self):
        nums = [2, 5, 1, 1, 4]
        expected = 5
        result = self.solution.max_value(nums)
        self.assertEqual(result, expected)
