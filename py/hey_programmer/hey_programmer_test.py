import unittest

from hey_programmer import greet


class TestHeyProgrammer(unittest.TestCase):
    def test_case_one(self):
        str = "programmer"
        self.assertEqual(greet(str), "hey programmer")

    def test_case_two(self):
        str = "alvin"
        self.assertEqual(greet(str), "hey alvin")

    def test_case_three(self):
        str = "jason"
        self.assertEqual(greet(str), "hey jason")

    def test_case_four(self):
        str = "how now brown cow"
        self.assertEqual(greet(str), "hey how now brown cow")


if __name__ == "__main__":
    unittest.main()
