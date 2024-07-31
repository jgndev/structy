import unittest

from max_value import max_value


class TestMaxValue(unittest.TestCase):
    def test_case_one(self):
        nums = [4, 7, 2, 8, 10, 9]
        self.assertEqual(max_value(nums), 10)

    def test_case_two(self):
        nums = [10, 5, 40, 40.3]
        self.assertEqual(max_value(nums), 40.3)

    def test_case_three(self):
        nums = [-5, -2, -1, -11]
        self.assertEqual(max_value(nums), -1)

    def test_case_four(self):
        nums = [42]
        self.assertEqual(max_value(nums), 42)

    def test_case_five(self):
        nums = [1000, 8]
        self.assertEqual(max_value(nums), 1000)

    def test_case_six(self):
        nums = [1000, 8, 9000]
        self.assertEqual(max_value(nums), 9000)

    def test_case_seven(self):
        nums = [2, 5, 1, 1, 4]
        self.assertEqual(max_value(nums), 5)

    def test_case_eight(self):
        nums = [1.5, 2.5, 3.5, 2.7]
        self.assertEqual(max_value(nums), 3.5)


if __name__ == "__main__":
    unittest.main()
