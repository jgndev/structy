pub fn max_value(nums: Vec<i32>) -> i32 {
    let mut max = i32::min_value();
    for n in nums.iter() {
        if *n > max {
            max = *n;
        }
    }

    max
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_case_one() {
        let expected = 10;
        let nums = vec![4, 7, 2, 8, 10, 9];
        let result = max_value(nums);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_two() {
        let expected = 40;
        let nums = vec![10, 5, 17, 40, -1, 9, 39];
        let result = max_value(nums);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_three() {
        let expected = -1;
        let nums = vec![-5, -2, -1, -11];
        let result = max_value(nums);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_five() {
        let expected = 42;
        let nums = vec![42];
        let result = max_value(nums);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_six() {
        let expected = 1000;
        let nums = vec![1000, 8];
        let result = max_value(nums);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_seven() {
        let expected = 9000;
        let nums = vec![1000, 8, 9000];
        let result = max_value(nums);
        assert_eq!(result, expected);
    }

}