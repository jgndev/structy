package dev.jgn;

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class SolutionTest {

    @Test
    void testHeyProgrammer() {
        assertEquals(Solution.heyProgrammer("programmer"), "hey programmer");
        assertEquals(Solution.heyProgrammer("alvin"), "hey alvin");
        assertEquals(Solution.heyProgrammer("jason"), "hey jason");
        assertEquals(Solution.heyProgrammer("jeremy"), "hey jeremy");
        assertEquals(Solution.heyProgrammer("now brown cow"), "hey now brown cow");
    }

}
