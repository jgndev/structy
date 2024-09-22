package solution

import "testing"

func TestCaseOne(t *testing.T) {
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

	got := treeIncludes(a, "e")
	want := true

	if got != want {
		t.Errorf("got %v, want %v", got, want)
	}
}

func TestCaseTwo(t *testing.T) {
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

	got := treeIncludes(a, "z")
	want := false

	if got != want {
		t.Errorf("got %v, want %v", got, want)
	}
}
func TestCaseThree(t *testing.T) {
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

	got := treeIncludes(a, "a")
	want := true

	if got != want {
		t.Errorf("got %v, want %v", got, want)
	}
}

func TestCaseFour(t *testing.T) {
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

	got := treeIncludes(a, "j")
	want := false

	if got != want {
		t.Errorf("got %v, want %v", got, want)
	}
}

func TestCaseFive(t *testing.T) {
	got := treeIncludes(nil, "x")
	want := false

	if got != want {
		t.Errorf("got %v, want %v", got, want)
	}
}
