package solution

import (
	"slices"
	"testing"
)

func TestCaseOne(t *testing.T) {
	a := NewNode("a")
	b := NewNode("b")
	c := NewNode("c")
	d := NewNode("d")

	a.next = b
	b.next = c
	c.next = d

	want := []string{"a", "b", "c", "d"}
	got := linkedListValues(a)

	if !slices.Equal(got, want) {
		t.Errorf("got %v, want %v", got, want)
	}
}

func TestCaseTwo(t *testing.T) {
	x := NewNode("x")
	y := NewNode("y")

	x.next = y

	want := []string{"x", "y"}
	got := linkedListValues(x)

	if !slices.Equal(got, want) {
		t.Errorf("got %v, want %v", got, want)
	}
}

func TestCaseThree(t *testing.T) {
	q := NewNode("q")

	want := []string{"q"}
	got := linkedListValues(q)

	if !slices.Equal(got, want) {
		t.Errorf("got %v, want %v", got, want)
	}
}

func TestCaseFour(t *testing.T) {
	want := []string{}
	got := linkedListValues(nil)

	if !slices.Equal(got, want) {
		t.Errorf("got %v, want %v", got, want)
	}
}
