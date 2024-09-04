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

## Problem

Write a function, removeNode, that takes in a pointer to the head of a linked list and a target value as arguments. The function should delete the node containing the target value from the linked list and return the head of the resulting linked list. If the target appears multiple times in the linked list, only remove the first instance of the target in the list.

Do this in-place. You do not need to dynamically deallocate the memory with delete, just reassign next pointers correctly.

You may assume that the input list is non-empty.

You may assume that the input list contains the target.
