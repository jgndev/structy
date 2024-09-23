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

## Max root to leaf path sum

Write a function, maxPathSum, that takes in a pointer to the root of a binary tree 
that contains number values. The function should return the maximum sum of any 
root to leaf path within the tree.

You may assume that the input tree is non-empty.
