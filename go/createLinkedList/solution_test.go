package solution

import "testing"

func TestCaseOne(t *testing.T) {
	values := []string{"h", "e", "y"}
	head := createLinkedList(values)

	if head.val != "h" {
		t.Errorf("wanted 'h', got %s", head.val)
	}

	if head.next.val != "e" {
		t.Errorf("wanted 'e', got %s", head.next.val)
	}

	if head.next.next.val != "y" {
		t.Errorf("wanted 'y', got %s", head.next.next.val)
	}
}

func TestCaseTwo(t *testing.T) {
	values := []string{"1", "7", "1", "8"}
	head := createLinkedList(values)

	if head.val != "1" {
		t.Errorf("wanted '1', got %s", head.val)
	}

	if head.next.val != "7" {
		t.Errorf("wanted '7', got %s", head.next.val)
	}

	if head.next.next.val != "1" {
		t.Errorf("wanted '1', got %s", head.next.next.val)
	}

	if head.next.next.next.val != "8" {
		t.Errorf("wanted '8', got %s", head.next.next.val)
	}
}

func TestCaseThree(t *testing.T) {
	values := []string{"a"}
	head := createLinkedList(values)

	if head.val != "a" {
		t.Errorf("wanted 'a', got %s", head.val)
	}

	if head.next != nil {
		t.Errorf("wanted nil, got %v", head.next)
	}
}

func TestCaseFour(t *testing.T) {
	head := createLinkedList(nil)

	if head != nil {
		t.Errorf("wanted nil, got %v", head)
	}
}
