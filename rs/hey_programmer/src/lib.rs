pub fn greet(s : &str) -> String {
    format!("hey {}", s)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_case_one() {
        let name = "alvin";
        let expected = String::from("hey alvin");
        let result = greet(name);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_two() {
        let name = "jason";
        let expected = String::from("hey jason");
        let result = greet(name);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_three() {
        let name = "how now brown cow";
        let expected = String::from("hey how now brown cow");
        let result = greet(name);
        assert_eq!(result, expected);
    }
}