from math import sqrt, floor

class Solution:

    def is_prime(self, number):
        if number < 2:
            return False

        for i in range(2, floor(sqrt(number)) + 1):
            if number % i == 0:
                return False

        return True
