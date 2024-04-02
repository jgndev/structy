namespace HeyProgrammerTests;

using HeyProgrammer;

public class Tests {

    [Test]
    public void TestCaseOne() {
        var hp = new HeyProgrammer();
        var greeting = hp.Greet("Jeremy");
        var expected = "hey Jeremy";
        Assert.That(expected, Is.EqualTo(greeting));
    }

    [Test]
    public void TestCaseTwo() {
        var hp = new HeyProgrammer();
        var greeting = hp.Greet("Alvin");
        var expected = "hey Alvin";
        Assert.That(expected, Is.EqualTo(greeting));
    }
    
    [Test]
    public void TestCaseThree() {
        var hp = new HeyProgrammer();
        var greeting = hp.Greet("Jason");
        var expected = "hey Jason";
        Assert.That(expected, Is.EqualTo(greeting));
    }
    
    [Test]
    public void TestCaseFour() {
        var hp = new HeyProgrammer();
        var greeting = hp.Greet("now brown cow");
        var expected = "hey now brown cow";
        Assert.That(expected, Is.EqualTo(greeting));
    }
    
}
