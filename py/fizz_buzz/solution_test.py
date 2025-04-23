import unittest
from solution import Solution

class TestFizzBuss(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_case_one(self):
        n = 11
        expected = [1, 2, "fizz", 4, "buzz", "fizz", 7, 8, "fizz", "buzz", 11]
        result = self.solution.fizz_buzz(n)
        self.assertEqual(expected, result)

    def test_case_two(self):
        n = 2
        expected = [1, 2]
        result = self.solution.fizz_buzz(n)
        self.assertEqual(expected, result)

    def test_case_three(self):
        n = 16
        expected = [1, 2, "fizz", 4, "buzz", "fizz", 7, 8, "fizz", "buzz", 11, "fizz", 13, 14, "fizzbuzz", 16]
        result = self.solution.fizz_buzz(n)
        self.assertEqual(expected, result)

    def test_case_four(self):
        n = 32
        expected = [1, 2, "fizz", 4, "buzz", "fizz", 7, 8, "fizz", "buzz", 11, "fizz", 13, 14, "fizzbuzz", 16, 17, "fizz", 19, "buzz", "fizz", 22, 23, "fizz", "buzz", 26, "fizz", 28, 29, "fizzbuzz", 31, 32 ]
        result = self.solution.fizz_buzz(n)
        self.assertEqual(expected, result)

        