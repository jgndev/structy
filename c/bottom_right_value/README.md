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

## bottom right value

Write a function, bottomRightValue, that takes in a pointer to the root of a 
binary tree. 

The function should return the right-most value in the bottom-most level of the tree.

You may assume that the input tree is non-empty.

```cpp
Node a("3");
Node b("11");
Node c("10");
Node d("4");
Node e("-2");
Node f("1");

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;

//       3
//    /    \
//   11     10
//  / \      \
// 4   -2     1

bottomRightValue(&a); // -> "1"
```
