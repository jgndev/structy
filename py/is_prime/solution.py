from math import sqrt, floor

class Solution:
    def is_prime(self, n: int):
        # numbers less than 2 are not prime
        if n < 2:
            return False

        for i in range(2, floor(sqrt(n)) + 1):
            if n % i == 0:
                return False

        return True