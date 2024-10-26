import unittest
from solution import Solution

class TestGreet(unittest.TestCase):
    solution = Solution()

    def test_case_one(self):
        s = "programmer"
        expected = "hey programmer"
        result = self.solution.greet(s)
        self.assertEqual(result, expected)

    def test_case_two(self):
        s = "jason"
        expected = "hey jason"
        result = self.solution.greet(s)
        self.assertEqual(result, expected)

    def test_case_three(self):
        s = "now brown cow"
        expected = "hey now brown cow"
        result = self.solution.greet(s)
        self.assertEqual(result, expected)

if __name__ == '__main__':
    unittest.main()