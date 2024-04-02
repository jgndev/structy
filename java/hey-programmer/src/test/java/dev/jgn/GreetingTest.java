package dev.jgn;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class GreetingTest {

    @Test
    public void TestCaseOne() {
        var greeting = Greeting.greet("Jeremy");
        var expected = "hey Jeremy";
        assertEquals(greeting, expected);
    }

    @Test
    public void TestCaseTwo() {
        var greeting = Greeting.greet("Jason");
        var expected = "hey Jason";
        assertEquals(greeting, expected);
    }
    @Test
    public void TestCaseThree() {
        var greeting = Greeting.greet("Alvin");
        var expected = "hey Alvin";
        assertEquals(greeting, expected);
    }

    @Test
    public void TestCaseFour() {
        var greeting = Greeting.greet("how now brown cow");
        var expected = "hey how now brown cow";
        assertEquals(greeting, expected);
    }


}
