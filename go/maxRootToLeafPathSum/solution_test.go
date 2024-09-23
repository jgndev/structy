package solution

import "testing"

func TestCaseOne(t *testing.T) {
	a := NewNode(3)
	b := NewNode(11)
	c := NewNode(4)
	d := NewNode(4)
	e := NewNode(-2)
	f := NewNode(1)

	a.left = b
	a.right = c
	b.left = d
	b.right = e
	c.right = f

	got := maxPathSum(a)
	want := 18

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseTwo(t *testing.T) {
	a := NewNode(5)
	b := NewNode(11)
	c := NewNode(54)
	d := NewNode(20)
	e := NewNode(15)
	f := NewNode(1)
	g := NewNode(3)

	a.left = b
	a.right = c
	b.left = d
	b.right = e
	e.left = f
	e.right = g

	got := maxPathSum(a)
	want := 59

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseThree(t *testing.T) {
	a := NewNode(-1)
	b := NewNode(-6)
	c := NewNode(-5)
	d := NewNode(-3)
	e := NewNode(0)
	f := NewNode(-13)
	g := NewNode(-1)
	h := NewNode(-2)

	a.left = b
	a.right = c
	b.left = d
	b.right = e
	c.right = f
	e.left = g
	f.right = h

	got := maxPathSum(a)
	want := -8

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseFour(t *testing.T) {
	a := NewNode(42)

	got := maxPathSum(a)
	want := 42

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}
