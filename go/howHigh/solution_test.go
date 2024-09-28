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

	want := 2
	got := howHigh(a)

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseTwo(t *testing.T) {
	a := NewNode("a")
	b := NewNode("b")
	c := NewNode("c")
	d := NewNode("d")
	e := NewNode("e")
	f := NewNode("f")
	g := NewNode("g")

	a.left = b
	a.right = c
	b.left = d
	b.right = e
	c.right = f
	e.left = g

	want := 3
	got := howHigh(a)

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseThree(t *testing.T) {
	a := NewNode("a")
	c := NewNode("c")

	a.left = c

	want := 1
	got := howHigh(a)

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseFour(t *testing.T) {
	a := NewNode("a")

	want := 0
	got := howHigh(a)

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseFive(t *testing.T) {
	want := -1
	got := howHigh(nil)

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}
