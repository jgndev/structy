package solution

import "testing"

func TestCaseOne(t *testing.T) {
	a := NewNode("a")
	b := NewNode("b")
	c := NewNode("c")
	d := NewNode("d")

	a.next = b
	b.next = c
	c.next = d

	want := true
	got := linkedListFind(a, "c")

	if got != want {
		t.Errorf("got %v, want %v", got, want)
	}
}

func TestCaseTwo(t *testing.T) {
	a := NewNode("a")
	b := NewNode("b")
	c := NewNode("c")
	d := NewNode("d")

	a.next = b
	b.next = c
	c.next = d

	want := true
	got := linkedListFind(a, "d")

	if got != want {
		t.Errorf("got %v, want %v", got, want)
	}
}

func TestCaseThree(t *testing.T) {
	a := NewNode("a")
	b := NewNode("b")
	c := NewNode("c")
	d := NewNode("d")

	a.next = b
	b.next = c
	c.next = d

	want := false
	got := linkedListFind(a, "q")

	if got != want {
		t.Errorf("got %v, want %v", got, want)
	}
}

func TestCaseFour(t *testing.T) {
	a := NewNode("jason")
	b := NewNode("leneli")

	a.next = b

	want := true
	got := linkedListFind(a, "jason")

	if got != want {
		t.Errorf("got %v, want %v", got, want)
	}
}

func TestCaseFive(t *testing.T) {
	a := NewNode("potato")

	want := false
	got := linkedListFind(a, "apple")

	if got != want {
		t.Errorf("got %v, want %v", got, want)
	}
}
