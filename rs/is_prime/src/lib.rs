// is_prime
//
// Write a function is_prime that takes in a number as an argument.
// The function should return a boolean indicating whether or not
// the given number is prime.
//
// A prime number is a number that is only divisible by two distinct
// numbers: 1 and itself.
//
// For example, 7 is prime because it is only divisible by 1 and 7.
// For example, 6 is not prime because it is divisible by 1, 2, 3 and 6.
//
// Assume the input number is a positive integer.

pub fn is_prime(n: i32) -> bool {
    // numbers less than 2 are not prime
    if n < 2 {
        return false;
    }

    // 2 is the only even prime
    if n == 2 {
        return true;
    }

    // even numbers other than 2 are not prime
    if n % 2 == 0 {
        return false;
    }

    // Only check odd numbers up to the root
    for i in (3..=((n as f64).sqrt() as i32)).step_by(2) {
        if n % i == 0 {
            return false;
        }
    }

    true
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_case_one() {
        let expected = true;
        let result = is_prime(2);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_two() {
        let expected = true;
        let result = is_prime(3);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_three() {
        let expected = false;
        let result = is_prime(4);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_four() {
        let expected = true;
        let result = is_prime(5);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_five() {
        let expected = false;
        let result = is_prime(6);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_six() {
        let expected = true;
        let result = is_prime(7);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_seven() {
        let expected = false;
        let result = is_prime(8);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_eight() {
        let expected = false;
        let result = is_prime(25);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_nine() {
        let expected = true;
        let result = is_prime(31);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_ten() {
        let expected = true;
        let result = is_prime(2017);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_eleven() {
        let expected = false;
        let result = is_prime(2048);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_twelve() {
        let expected = false;
        let result = is_prime(1);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_thirteen() {
        let expected = false;
        let result = is_prime(713);
        assert_eq!(result, expected);
    }
}