package isprime

import "math"

func isPrime(n int) bool {
	if n < 2 {
		return false
	}

	sqn := int(math.Sqrt(float64(n)))

	for i := 2; i <= sqn; i++ {
		if n%i == 0 {
			return false
		}
	}

	return true
}
