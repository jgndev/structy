# C DSA Template

This template is created to quickly stand up a new project for C that includes
Unity Tests and CMake for builds.

## Usage

`git clone https://github.com/jgndev/c_dsa_templ your_dir_name`


## Project Setup

Run project setup to configure the project and create `compile-commands.json` for LSP support.

## Running Tests

Add your tests to `test/test_solution.c` 

Then you will `cd` into the `build` directory and run `make`.

```bash
cd build && \
make && \
./test_solution
```

## Description

Write a function, addLists, that takes in pointers to the heads of two linked 
lists, each representing a number. The nodes of the linked lists contain digits 
as values. 

The nodes in the input lists are reversed; this means that the least significant 
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

Be sure to dynamically allocate the new nodes in memory using new.
