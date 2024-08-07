from math import sqrt, floor

def is_prime(n):
    if n < 2:
        return False

    sqn = floor(sqrt(n) + 1)

    for i in range(2, sqn):
        if n % i == 0:
            return False

    return True