/*
reference: https://www.programiz.com/dsa/heap-sort

Heap is a special tree-based data structure.
A binary tree is said to follow a heap data structure if
1. it is a complete binary tree
2. All nodes in the tree follow the property that they are greater than their children,
i.e. the largest element is at the root and both its children and smaller than the root and so on. Such a heap is called a max-heap.
If instead, all nodes are smaller than their children, it is called a min-heap.

A complete binary tree has an interesting property
that we can use to find the children and parents of any node.

If the index of any element in the array is i,
the element in the index 2i+1 will become the left child
and element in 2i+2 index will become the right child.
Also, the parent of any element at index i is given by the lower bound of (i-1)/2.
This rules hold for finding parent of any node(i.e. any element in the array).

*/

#include <iostream>
#include <array> // static array, length is fixed
using namespace std;

void heapify(int arr[], )
{
}

int main()
{
    // std::array is better than built-in array
    // It has friendly value semantics, so that it can be passed to or returned from functions by value.
    // Its interface makes it more convenient to find the size, and use with STL-style iterator-based algorithms.
    // Check this: https://stackoverflow.com/questions/30263303/stdarray-vs-array-performance
    array<int, 3> test_array{1, 12, 9, 5, 6, 10};

    return 0;
}