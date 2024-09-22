use std::collections::VecDeque;
use std::cmp;

// Node struct
struct Node {
    val: i32,
    left: Option<Box<Node>>,
    right: Option<Box<Node>>,
}

impl Node {
    fn new(val: i32) -> Self {
        Node {
            val,
            left: None,
            right: None,
        }
    }
}

struct Solution;

impl Solution {
    fn tree_min_value(root: &Node) -> i32 {
        // initialize the min value to the max value of i32
        let mut min = i32::MAX;

        // stack for pushing and popping nodes
        let mut stack = VecDeque::new();
        // push the root node onto the stack
        stack.push_back(root);

        // while the stack is not empty
        while let Some(curr) = stack.pop_back() {
            // update min to be the minimum of min and the current value
            min = cmp::min(min, curr.val);

            // if curr has a right node.
            if let Some(right) = &curr.right {
                // push curr's right node onto the stack
                stack.push_back(right);
            }

            // if curr has a left node.
            if let Some(left) = &curr.left {
                // push curr's left node onto the stack
                stack.push_back(left);
            }
        }

        // return the min
        min
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_case_one() {
        let mut a = Box::new(Node::new(3));
        let mut b = Box::new(Node::new(11));
        let mut c = Box::new(Node::new(4));
        let d = Box::new(Node::new(4));
        let e = Box::new(Node::new(-2));
        let f = Box::new(Node::new(1));

        b.left = Some(d);
        b.right = Some(e);
        c.right = Some(f);
        a.left = Some(b);
        a.right = Some(c);

        assert_eq!(Solution::tree_min_value(&a), -2);
    }

    #[test]
    fn test_case_two() {
        let a = Box::new(Node::new(5));
        assert_eq!(Solution::tree_min_value(&a), 5);
    }

    #[test]
    fn test_case_three() {
        let mut a = Box::new(Node::new(10));
        let mut b = Box::new(Node::new(5));
        let c = Box::new(Node::new(15));
        let d = Box::new(Node::new(3));
        let e = Box::new(Node::new(7));

        b.left = Some(d);
        b.right = Some(e);
        a.left = Some(b);
        a.right = Some(c);

        assert_eq!(Solution::tree_min_value(&a), 3);
    }

    #[test]
    fn test_case_four() {
        let mut a = Box::new(Node::new(-1));
        let mut b = Box::new(Node::new(-5));
        let mut c = Box::new(Node::new(-3));
        let d = Box::new(Node::new(-10));
        let e = Box::new(Node::new(-2));

        b.left = Some(d);
        c.right = Some(e);
        a.left = Some(b);
        a.right = Some(c);

        assert_eq!(Solution::tree_min_value(&a), -10);
    }

    #[test]
    fn test_case_five() {
        let mut a = Box::new(Node::new(8));
        let mut b = Box::new(Node::new(3));
        let mut d = Box::new(Node::new(6));
        let mut g = Box::new(Node::new(10));
        let mut h = Box::new(Node::new(14));
        let c = Box::new(Node::new(1));
        let e = Box::new(Node::new(4));
        let f = Box::new(Node::new(7));
        let i = Box::new(Node::new(13));

        d.left = Some(e);
        d.right = Some(f);
        b.left = Some(c);
        b.right = Some(d);
        h.left = Some(i);
        g.right = Some(h);
        a.left = Some(b);
        a.right = Some(g);

        assert_eq!(Solution::tree_min_value(&a), 1);
    }
}
