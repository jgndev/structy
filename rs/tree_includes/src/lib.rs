use std::collections::VecDeque;

// Define a simple Node struct
#[derive(Debug)]
struct Node {
    value: String,
    left: Option<Box<Node>>,
    right: Option<Box<Node>>,
}

// Implementation for Node
impl Node {
    // Create a new Node
    fn new(value: &str) -> Node {
        Node {
            value: value.to_string(),
            left: None,
            right: None,
        }
    }
}

// Solution
fn tree_includes(root: &Node, target: &str) -> bool {
    // Create a stack (using VecDeque) for the search.
    let mut stack = VecDeque::new();
    stack.push_back(root);

    // While the stack is not empty, pop the top and check the value.
    while let Some(node) = stack.pop_back() {
        // check if this node's value is equal to the target.
        if node.value == target {
            return true;
        }

        // Look for right and left nodes (DFS order) and add them to
        // the stack if they exist.

        // Check if a right node exists and add it to the stack if it does.
        if let Some(right) = &node.right {
            stack.push_back(right);
        }

        // Check if a left node exists and add it to the stack if it does.
        if let Some(left) = &node.left {
            stack.push_back(left);
        }
    }

    false
}

// Test module
#[cfg(test)]
mod tests {
    use super::*;

    // Helper function to create a test tree
    fn create_test_tree() -> Node {
        let mut root = Node::new("a");
        root.left = Some(Box::new(Node::new("b")));
        root.right = Some(Box::new(Node::new("c")));

        if let Some(ref mut left_child) = root.left {
            left_child.left = Some(Box::new(Node::new("d")));
            left_child.right = Some(Box::new(Node::new("e")));
        }

        if let Some(ref mut right_child) = root.right {
            right_child.right = Some(Box::new(Node::new("f")));
        }

        root
    }

    #[test]
    fn test_tree_includes_existing_values() {
        let root = create_test_tree();
        assert!(tree_includes(&root, "a"));
        assert!(tree_includes(&root, "c"));
        assert!(tree_includes(&root, "e"));
        assert!(tree_includes(&root, "f"));
    }

    #[test]
    fn test_tree_includes_non_existing_values() {
        let root = create_test_tree();
        assert!(!tree_includes(&root, "g"));
        assert!(!tree_includes(&root, "h"));
    }

    #[test]
    fn test_tree_includes_root_only() {
        let root = Node::new("root");
        assert!(tree_includes(&root, "root"));
        assert!(!tree_includes(&root, "not_root"));
    }

    #[test]
    fn test_tree_includes_deep_nested() {
        let mut root = Node::new("a");
        root.left = Some(Box::new(Node::new("b")));
        if let Some(ref mut left) = root.left {
            left.left = Some(Box::new(Node::new("c")));
            if let Some(ref mut left_left) = left.left {
                left_left.left = Some(Box::new(Node::new("d")));
            }
        }
        assert!(tree_includes(&root, "d"));
        assert!(!tree_includes(&root, "e"));
    }
}