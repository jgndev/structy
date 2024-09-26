package solution

import (
	"slices"
	"testing"
)

func TestPathFinder(t *testing.T) {
	a := NewNode("a")
	b := NewNode("b")
	c := NewNode("c")
	d := NewNode("d")
	e := NewNode("e")
	f := NewNode("f")

	a.left = b
	a.right = c
	b.left = d
	b.right = e
	c.right = f

	got := pathFinder(a, "e")
	want := []string{"a", "b", "e"}

	if !slices.Equal(got, want) {
		t.Errorf("got %v, want %v", got, want)
	}
}
