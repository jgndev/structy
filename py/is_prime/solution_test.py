import unittest
from solution import Solution

class TestIsPrime(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_case_one(self):
        result = self.solution.is_prime(7)
        self.assertTrue(result)

    def test_case_two(self):
        result = self.solution.is_prime(3)
        self.assertTrue(result)

    def test_case_three(self):
        result = self.solution.is_prime(4)
        self.assertFalse(result)

    def test_case_four(self):
        result = self.solution.is_prime(5)
        self.assertTrue(result)

    def test_case_five(self):
        result = self.solution.is_prime(6)
        self.assertFalse(result)

    def test_case_six(self):
        result = self.solution.is_prime(7)
        self.assertTrue(result)

    def test_case_seven(self):
        result = self.solution.is_prime(8)
        self.assertFalse(result)

    def test_case_eight(self):
        result = self.solution.is_prime(25)
        self.assertFalse(result)

    def test_case_nine(self):
        result = self.solution.is_prime(31)
        self.assertTrue(result)

    def test_case_ten(self):
        result = self.solution.is_prime(2017)
        self.assertTrue(result)

    def test_case_eleven(self):
        result = self.solution.is_prime(2048)
        self.assertFalse(result)

    def test_case_twelve(self):
        result = self.solution.is_prime(1)
        self.assertFalse(result)

    def test_case_thirteen(self):
        result = self.solution.is_prime(713)
        self.assertFalse(result)
