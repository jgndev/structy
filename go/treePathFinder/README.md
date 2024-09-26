# Tree Path Finder

Write a function, pathFinder, that takes in a pointer to the root of a binary tree 
and a target value. The function should return a pointer to a vector representing a 
path to the target value.

Be sure to dynamically allocate the vector with new.

If the target value is not present in the tree, then return nullptr;

You may assume that the tree contains unique values.

```cpp
Node a("a");
Node b("b");
Node c("c");
Node d("d");
Node e("e");
Node f("f");

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;

//      a
//    /   \
//   b     c
//  / \     \
// d   e     f

pathFinder(&a, "e"); // -> [ "a", "b", "e" ]
```