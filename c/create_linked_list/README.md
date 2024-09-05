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

### create linked list

Write a function, createLinkedList, that takes in a vector of values as an argument. The function should create a linked list containing each element of the vector as the values of the nodes. The function should return the head of the linked list.

Be sure to dynamically allocate the new nodes in memory using new.
