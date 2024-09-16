package solution

import (
	"slices"
	"testing"
)

func TestDepthFirstValues(t *testing.T) {
	a := &Node{val: "a"}
	b := &Node{val: "b"}
	c := &Node{val: "c"}
	d := &Node{val: "d"}
	e := &Node{val: "e"}
	f := &Node{val: "f"}

	a.left = b
	a.right = c
	b.left = d
	b.right = e
	c.right = f

	got := depthFirstValues(a)
	want := []string{"a", "b", "d", "e", "c", "f"}

	if !slices.Equal(got, want) {
		t.Errorf("got %v, want %v", got, want)
	}
}
