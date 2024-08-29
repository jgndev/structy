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

	want := "c"
	got := getNodeValue(a, 2)

	if got != want {
		t.Errorf("got %s, want %s", got, want)
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

	want := "d"
	got := getNodeValue(a, 3)

	if got != want {
		t.Errorf("got %s, want %s", got, want)
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

	want := ""
	got := getNodeValue(a, 7)

	if got != want {
		t.Errorf("got %s, want %s", got, want)
	}
}

func TestCaseFour(t *testing.T) {
	a := NewNode("banana")
	b := NewNode("mango")
	c := NewNode("cherry")
	d := NewNode("grape")

	a.next = b
	b.next = c
	c.next = d

	want := "mango"
	got := getNodeValue(a, 1)

	if got != want {
		t.Errorf("got %s, want %s", got, want)
	}
}
