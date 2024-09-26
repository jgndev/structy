# Tree Value Count

Write a function, treeValueCount, that takes in a pointer to the root of a binary tree and a target value. The function should return the number of times that the target occurs in the tree.


```cpp
Node a(12);
Node b(6);
Node c(6);
Node d(4);
Node e(6);
Node f(12);

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;

//      12
//    /   \
//   6     6
//  / \     \
// 4   6     12

treeValueCount(&a,  6); // -> 3

```

