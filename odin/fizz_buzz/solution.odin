package solution

import "core:fmt"


fizz_buzz :: proc(n: int) -> []string {
    results := make([]string, n)

    for i := 1; i <= n; i += 1 {

        if i % 5 == 0 && i % 3 == 0 {
            results[i - 1] = "fizzbuzz"
        } else if i % 5 == 0 {
            results[i - 1] = "buzz"
        } else if i % 3 == 0 {
            results[i - 1] = "fizz"
        } else {
            buf: [4]byte
            results[i - 1] = fmt.tprint(i)
        }

    }

    return results
}