package solution

import (
	"testing"
)

func TestTreeMinValue(t *testing.T) {
	t.Run("Standard tree", func(t *testing.T) {
		//       3
		//    /    \
		//   11     4
		//  / \      \
		// 4   -2     1
		root := NewNode(3)
		root.left = NewNode(11)
		root.right = NewNode(4)
		root.left.left = NewNode(4)
		root.left.right = NewNode(-2)
		root.right.right = NewNode(1)

		result := treeMinValue(root)
		expected := -2
		if result != expected {
			t.Errorf("Expected %d, but got %d", expected, result)
		}
	})

	t.Run("Single node tree", func(t *testing.T) {
		root := NewNode(5)

		result := treeMinValue(root)
		expected := 5
		if result != expected {
			t.Errorf("Expected %d, but got %d", expected, result)
		}
	})

	t.Run("All positive values", func(t *testing.T) {
		//      10
		//    /    \
		//   5      15
		//  / \
		// 3   7
		root := NewNode(10)
		root.left = NewNode(5)
		root.right = NewNode(15)
		root.left.left = NewNode(3)
		root.left.right = NewNode(7)

		result := treeMinValue(root)
		expected := 3
		if result != expected {
			t.Errorf("Expected %d, but got %d", expected, result)
		}
	})

	t.Run("All negative values", func(t *testing.T) {
		//      -1
		//    /    \
		//  -5     -3
		//  /        \
		//-10        -2
		root := NewNode(-1)
		root.left = NewNode(-5)
		root.right = NewNode(-3)
		root.left.left = NewNode(-10)
		root.right.right = NewNode(-2)

		result := treeMinValue(root)
		expected := -10
		if result != expected {
			t.Errorf("Expected %d, but got %d", expected, result)
		}
	})

	t.Run("Empty tree", func(t *testing.T) {
		result := treeMinValue(nil)
		expected := 0
		if result != expected {
			t.Errorf("Expected %d, but got %d", expected, result)
		}
	})
}
