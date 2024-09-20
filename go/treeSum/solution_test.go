package solution

import (
	"testing"
)

func TestTreeSum(t *testing.T) {
	t.Run("test case one", func(t *testing.T) {
		result := treeSum(nil)
		expected := 0
		if result != expected {
			t.Errorf("Expected %d, but got %d", expected, result)
		}
	})

	t.Run("test case two", func(t *testing.T) {
		root := NewNode(5)
		result := treeSum(root)
		expected := 5
		if result != expected {
			t.Errorf("Expected %d, but got %d", expected, result)
		}
	})

	t.Run("test case three", func(t *testing.T) {
		root := NewNode(1)
		root.left = NewNode(2)
		root.right = NewNode(3)
		root.left.left = NewNode(4)
		root.left.right = NewNode(5)
		root.right.left = NewNode(6)
		root.right.right = NewNode(7)
		result := treeSum(root)
		expected := 28
		if result != expected {
			t.Errorf("Expected %d, but got %d", expected, result)
		}
	})

	t.Run("test case four", func(t *testing.T) {
		root := NewNode(1)
		root.left = NewNode(2)
		root.left.left = NewNode(3)
		root.left.left.left = NewNode(4)
		result := treeSum(root)
		expected := 10
		if result != expected {
			t.Errorf("Expected %d, but got %d", expected, result)
		}
	})

	t.Run("test case five", func(t *testing.T) {
		root := NewNode(1)
		root.right = NewNode(2)
		root.right.right = NewNode(3)
		root.right.right.right = NewNode(4)
		result := treeSum(root)
		expected := 10
		if result != expected {
			t.Errorf("Expected %d, but got %d", expected, result)
		}
	})
}
