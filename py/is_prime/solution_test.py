import unittest

from solution import Solution

class TestIsPrime(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_case_one(self):
        expected = True
        result = self.solution.is_prime(2)
        self.assertEqual(result, expected)

    def test_case_two(self):
        expected = True
        result = self.solution.is_prime(3)
        self.assertEqual(result, expected)

    def test_case_three(self):
        expected = False
        result = self.solution.is_prime(4)
        self.assertEqual(result, expected)

    def test_case_four(self):
        expected = False
        result = self.solution.is_prime(6)
        self.assertEqual(result, expected)

    def test_case_five(self):
        expected = True
        result = self.solution.is_prime(7)
        self.assertEqual(result, expected)

    def test_case_six(self):
        expected = False
        result = self.solution.is_prime(8)
        self.assertEqual(result, expected)

    def test_case_seven(self):
        expected = False
        result = self.solution.is_prime(25)
        self.assertEqual(result, expected)

    def test_case_eight(self):
        expected = True
        result = self.solution.is_prime(31)
        self.assertEqual(result, expected)

    def test_case_nine(self):
        expected = True
        result = self.solution.is_prime(2017)
        self.assertEqual(result, expected)

    def test_case_ten(self):
        expected = False
        result = self.solution.is_prime(2048)
        self.assertEqual(result, expected)

    def test_case_eleven(self):
        expected = False
        result = self.solution.is_prime(1)
        self.assertEqual(result, expected)

    def test_case_twelve(self):
        expected = False
        result = self.solution.is_prime(713)
        self.assertEqual(result, expected)

