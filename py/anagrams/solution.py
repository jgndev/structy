def anagrams(s1: str, s2: str) -> bool:
    if len(s1) != len(s2):
        return False

    # dictionary for storing and comparing char counts
    char_count = {}

    # add all characters in s1 to the dictionary
    for char in s1:
        char_count[char] = char_count.get(char, 0) + 1

    for char in s2:
        # if we find a char not in char_count, it cannot be an anagram
        if char not in char_count:
            return False
        # decrement the count for this char in the dictionary
        char_count[char] -= 1

        # if the count has reached 0, remove it from the dictionary
        if char_count[char] == 0:
            del char_count[char]

    return len(char_count) == 0
