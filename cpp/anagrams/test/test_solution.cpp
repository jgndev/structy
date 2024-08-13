//
// Created by Jeremy Novak on 8/13/24.
//

#include <gtest/gtest.h>
#include "solution.h"

class AnagramTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(AnagramTest, SimpleAnagram) {
    EXPECT_TRUE(solution.anagram("listen", "silent"));
}

TEST_F(AnagramTest, NotAnagram) {
    EXPECT_FALSE(solution.anagram("hello", "world"));
}

TEST_F(AnagramTest, DifferentLengths) {
    EXPECT_FALSE(solution.anagram("abc", "abcd"));
}

TEST_F(AnagramTest, SameWord) {
    EXPECT_TRUE(solution.anagram("word", "word"));
}

TEST_F(AnagramTest, EmptyStrings) {
    EXPECT_TRUE(solution.anagram("", ""));
}

TEST_F(AnagramTest, SingleCharacter) {
    EXPECT_TRUE(solution.anagram("a", "a"));
    EXPECT_FALSE(solution.anagram("a", "b"));
}

TEST_F(AnagramTest, CaseSensitive) {
    EXPECT_FALSE(solution.anagram("Abc", "abc"));
}

TEST_F(AnagramTest, WithNumbers) {
    EXPECT_TRUE(solution.anagram("12345", "54321"));
}

TEST_F(AnagramTest, WithSpecialCharacters) {
    EXPECT_TRUE(solution.anagram("a!b@c#", "#c@b!a"));
}

TEST_F(AnagramTest, LongStrings) {
    EXPECT_TRUE(solution.anagram(
        "abcdefghijklmnopqrstuvwxyz",
        "zyxwvutsrqponmlkjihgfedcba"
    ));
}

TEST_F(AnagramTest, RepeatedCharacters) {
    EXPECT_FALSE(solution.anagram("aaaaabbbcc", "abcabcabca"));
    EXPECT_FALSE(solution.anagram("aaaaabbbcc", "abcabcabcaa"));
}
