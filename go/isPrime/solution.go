package solution

import "math"

func isPrime(n int) bool {
	if n < 2 {
		return false
	}

	sqrt := int(math.Sqrt(float64(n))) + 1

	for i := 2; i < sqrt; i++ {
		if n%i == 0 {
			return false
		}
	}

	return true
}
