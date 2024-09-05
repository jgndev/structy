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

## Description

Write a function, _addLists_, that takes in pointers to the heads of two linked 
lists, each representing a number. The nodes of the linked lists contain digits 
as values. 

The nodes in the input lists are _reversed_; this means that the least significant 
digit of the number is the head. The function should return the head of a new 
linked listed representing the sum of the input lists. The output list should 
have its digits reversed as well.

You must do this by traversing through the linked lists once.

```
Say we wanted to compute 621 + 354 normally. The sum is 975:

   621
 + 354
 -----
   975

Then, the reversed linked list format of this problem would appear as:

    1 -> 2 -> 6
 +  4 -> 5 -> 3
 --------------
    5 -> 7 -> 9
```

Be sure to dynamically allocate the new nodes in memory using **new**.

## Example

```cpp
//   621
// + 354
// -----
//   975

Node a1(1);
Node a2(2);
Node a3(6);
a1.next = &a2;
a2.next = &a3;
// 1 -> 2 -> 6

Node b1(4);
Node b2(5);
Node b3(3);
b1.next = &b2;
b2.next = &b3;
// 4 -> 5 -> 3

addLists(&a1, &b1);
// 5 -> 7 -> 9
```
