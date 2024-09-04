package solution

import (
	"testing"
)

func TestRemoveNode(t *testing.T) {
	t.Run("Remove middle node", func(t *testing.T) {
		// a -> b -> c -> d -> e
		a := NewNode("a")
		b := NewNode("b")
		c := NewNode("c")
		d := NewNode("d")
		e := NewNode("e")
		a.next = b
		b.next = c
		c.next = d
		d.next = e

		got := removeNode(a, "c")

		if got != a {
			t.Errorf("Head should still be 'a'")
		}

		if a.next != b || b.next != d || d.next != e || e.next != nil {
			t.Errorf("result list is incorrect")
		}
	})

	t.Run("Remove first node", func(t *testing.T) {
		// a -> b -> c
		a := NewNode("a")
		b := NewNode("b")
		c := NewNode("c")
		a.next = b
		b.next = c

		got := removeNode(a, "a")

		if got != b {
			t.Errorf("New head should be 'b'")
		}

		if b.next != c || c.next != nil {
			t.Errorf("result list is incorrect")
		}
	})

	t.Run("Remove last node", func(t *testing.T) {
		// a -> b -> c
		a := NewNode("a")
		b := NewNode("b")
		c := NewNode("c")
		a.next = b
		b.next = c

		got := removeNode(a, "c")

		if got != a {
			t.Errorf("Head should still be 'a'")
		}

		if a.next != b || b.next != nil {
			t.Errorf("result list is incorrect")
		}
	})

	t.Run("Remove node not in list", func(t *testing.T) {
		// a -> b -> c
		a := NewNode("a")
		b := NewNode("b")
		c := NewNode("c")
		a.next = b
		b.next = c

		got := removeNode(a, "d")

		if got != a {
			t.Errorf("Head should still be 'a'")
		}

		if a.next != b || b.next != c || c.next != nil {
			t.Errorf("List should remain unchanged")
		}
	})

	t.Run("Remove from single node list", func(t *testing.T) {
		// a
		a := NewNode("a")

		got := removeNode(a, "a")

		if got != nil {
			t.Errorf("got should be nil for empty list")
		}
	})
}
