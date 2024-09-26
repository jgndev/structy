package solution

import "testing"

func TestCaseOne(t *testing.T) {
	a := NewNode(12)
	b := NewNode(6)
	c := NewNode(6)
	d := NewNode(4)
	e := NewNode(6)
	f := NewNode(12)

	a.left = b
	a.right = c
	b.left = d
	b.right = e
	c.right = f

	got := treeValueCount(a, 6)
	want := 3

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseTwo(t *testing.T) {
	a := NewNode(12)
	b := NewNode(6)
	c := NewNode(6)
	d := NewNode(4)
	e := NewNode(6)
	f := NewNode(12)

	a.left = b
	a.right = c
	b.left = d
	b.right = e
	c.right = f

	got := treeValueCount(a, 12)
	want := 2

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseThree(t *testing.T) {
	a := NewNode(7)
	b := NewNode(5)
	c := NewNode(1)
	d := NewNode(1)
	e := NewNode(8)
	f := NewNode(7)
	g := NewNode(1)
	h := NewNode(1)

	a.left = b
	a.right = c
	b.left = d
	b.right = e
	c.right = f
	e.left = g
	f.right = h

	got := treeValueCount(a, 1)
	want := 4

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseFour(t *testing.T) {
	a := NewNode(7)
	b := NewNode(5)
	c := NewNode(1)
	d := NewNode(1)
	e := NewNode(8)
	f := NewNode(7)
	g := NewNode(1)
	h := NewNode(1)

	a.left = b
	a.right = c
	b.left = d
	b.right = e
	c.right = f
	e.left = g
	f.right = h

	got := treeValueCount(a, 9)
	want := 0

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}
