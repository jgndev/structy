package solution

func fizzBuzz(n int) []interface{} {
	result := make([]interface{}, n)

	for i := 1; i <= n; i++ {
		switch {
		case i%3 == 0 && i%5 == 0:
			result[i-1] = "fizzbuzz"
		case i%5 == 0:
			result[i-1] = "buzz"
		case i%3 == 0:
			result[i-1] = "fizz"
		default:
			result[i-1] = i
		}
	}

	return result
}
