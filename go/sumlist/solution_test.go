package solution

import "testing"

func TestCaseOne(t *testing.T) {
	a := NewNode(2)
	b := NewNode(8)
	c := NewNode(3)
	d := NewNode(-1)
	e := NewNode(7)

	a.next = b
	b.next = c
	c.next = d
	d.next = e

	want := 19
	got := sumList(a)

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseTwo(t *testing.T) {
	x := NewNode(38)
	y := NewNode(4)

	x.next = y

	want := 42
	got := sumList(x)

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseThree(t *testing.T) {
	z := NewNode(100)

	want := 100
	got := sumList(z)

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseFour(t *testing.T) {
	want := 0
	got := sumList(nil)

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}
