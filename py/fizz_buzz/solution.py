class Solution:

    def fizz_buzz(self, n):
        output = []

        for i in range(1, n + 1):
            if i % 3 == 0 and i % 5 == 0:
                output.append("fizzbuzz")
            elif i % 5 == 0:
                output.append("buzz")
            elif i % 3 == 0:
                output.append("fizz")
            else:
                output.append(i)

        return output

