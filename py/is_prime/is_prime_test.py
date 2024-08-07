import unittest
from is_prime import is_prime

class TestIsPrime(unittest.TestCase):
    def test_case_one(self):
        n = 2
        result = is_prime(n)
        self.assertEqual(result, True)

    def test_case_two(self):
        n = 3
        result = is_prime(n)
        self.assertEqual(result, True)

    def test_case_three(self):
        n = 4
        result = is_prime(n)
        self.assertEqual(result, False)

    def test_case_four(self):
        n = 5
        result = is_prime(n)
        self.assertEqual(result, True)

    def test_case_five(self):
        n = 6
        result = is_prime(n)
        self.assertEqual(result, False)

    def test_case_six(self):
        n = 7
        result = is_prime(n)
        self.assertEqual(result, True)

    def test_case_seven(self):
        n = 8
        result = is_prime(n)
        self.assertEqual(result, False)

    def test_case_eight(self):
        n = 25
        result = is_prime(n)
        self.assertEqual(result, False)

    def test_cae_nine(self):
        n = 31
        result = is_prime(n)
        self.assertEqual(result, True)

    def test_case_ten(self):
        n = 2017
        result = is_prime(n)
        self.assertEqual(result, True)

    def test_case_eleven(self):
        n = 2048
        result = is_prime(n)
        self.assertEqual(result, False)

    def test_case_twelve(self):
        n = 1
        result = is_prime(n)
        self.assertEqual(result, False)

    def test_case_thirteen(self):
        n = 713
        result = is_prime(n)
        self.assertEqual(result, False)

if __name__ == '__main__':
    unittest.main()

