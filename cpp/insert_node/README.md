# DSA C++ Template

This repo is for quickly setting up a C++ project that uses [CMake](https://cmake.org) and [GoogleTest](https://google.github.io/googletest/).  

It is intended for practice with the C++ language while doing Data Structures and  
Algorithms problems like those found on [leetcode.com](https://leetcode.com)

## Instructions

1 - Clone the repo to a directory name of your choice.

```bash
git clone https://github.com/jgndev/dsa_cpp_templ example_problem
```

2 - Run the project init script `project-init.sh`

```bash
./project-init.sh
```

This creates a `build` directory and links `compile-commands.json` to the top level which
helps LSPs work in editors like [neovim](https://neovim.io).

## Building

1 - Change directory into `build`

2 - Run `make`


## Running tests

1 - Add your tests to `tests/test_solution.cpp`

2 - Change directory to `build`

3 - Run `make` to compile `test_solution`

4 - Run `./test_solution` to run the tests.

## Description

### insert node

Write a function, insertNode, that takes in a pointer to the head of a linked list, a value, and an index. The function should insert a new node with the value into the list at the specified index. Consider the head of the linked list as index 0. The function should return the head of the resulting linked list.

Do this in-place and be sure to dynamically allocate the new node in memory using new.

You may assume that the input list is non-empty and the index is not greater than the length of the input list.

### Example

```cpp
Node a("a");
Node b("b");
Node c("c");
Node d("d");

a.next = &b;
b.next = &c;
c.next = &d;

// a -> b -> c -> d

insertNode(&a, "x", 2);
// a -> b -> x -> c -> d
```
