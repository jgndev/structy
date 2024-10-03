package solution

import "testing"

func TestCaseOne(t *testing.T) {
	a := NewNode("3")
	b := NewNode("11")
	c := NewNode("10")
	d := NewNode("4")
	e := NewNode("-2")
	f := NewNode("1")

	a.left = b
	a.right = c
	b.left = d
	b.right = e
	c.right = f

	want := "1"

	got := bottomRightValue(a)

	if got != want {
		t.Errorf("got %s, want %s", got, want)
	}
}

func TestCaseTwo(t *testing.T) {
	a := NewNode("-1")
	b := NewNode("-6")
	c := NewNode("-5")
	d := NewNode("-3")
	e := NewNode("-4")
	f := NewNode("-13")
	g := NewNode("-2")
	h := NewNode("6")

	a.left = b
	a.right = c
	b.left = d
	b.right = e
	c.right = f
	e.left = g
	e.right = h

	want := "6"

	got := bottomRightValue(a)

	if got != want {
		t.Errorf("got %s, want %s", got, want)
	}
}

func TestCaseThree(t *testing.T) {
	a := NewNode("-1")
	b := NewNode("-6")
	c := NewNode("-5")
	d := NewNode("-3")
	e := NewNode("-4")
	f := NewNode("-13")
	g := NewNode("-2")
	h := NewNode("6")
	i := NewNode("7")

	a.left = b
	a.right = c
	b.left = d
	b.right = e
	c.right = f
	e.left = g
	e.right = h
	f.left = i

	want := "7"

	got := bottomRightValue(a)

	if got != want {
		t.Errorf("got %s, want %s", got, want)
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
	b.right = d
	d.left = e
	e.right = f

	want := "f"

	got := bottomRightValue(a)

	if got != want {
		t.Errorf("got %s, want %s", got, want)
	}
}

func TestCaseFive(t *testing.T) {
	a := NewNode("42")

	want := "42"

	got := bottomRightValue(a)

	if got != want {
		t.Errorf("got %s, want %s", got, want)
	}
}
