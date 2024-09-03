package solution

import "testing"

func TestCaseOne(t *testing.T) {
	a := NewNode(5)
	b := NewNode(5)
	c := NewNode(7)
	d := NewNode(7)
	e := NewNode(7)
	f := NewNode(6)

	a.next = b
	b.next = c
	c.next = d
	d.next = e
	e.next = f

	want := 3
	got := longestStreak(a)

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseTwo(t *testing.T) {
	a := NewNode(3)
	b := NewNode(3)
	c := NewNode(3)
	d := NewNode(3)
	e := NewNode(9)
	f := NewNode(9)

	a.next = b
	b.next = c
	c.next = d
	d.next = e
	e.next = f

	want := 4
	got := longestStreak(a)

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseThree(t *testing.T) {
	a := NewNode(9)
	b := NewNode(9)
	c := NewNode(1)
	d := NewNode(9)
	e := NewNode(9)
	f := NewNode(9)

	a.next = b
	b.next = c
	c.next = d
	d.next = e
	e.next = f

	want := 3
	got := longestStreak(a)

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseFour(t *testing.T) {
	a := NewNode(5)
	b := NewNode(5)

	a.next = b

	want := 2
	got := longestStreak(a)

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}

func TestCaseFive(t *testing.T) {
	want := 0
	got := longestStreak(nil)

	if got != want {
		t.Errorf("got %d, want %d", got, want)
	}
}
