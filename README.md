# Binary Trees

This repository contains implementations and examples of various binary tree data structures in C.

## Data Structures

### Basic Binary Tree
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
Binary Search Tree (BST)
typedef struct binary_tree_s bst_t;
AVL Tree
typedef struct binary_tree_s avl_t;
Max Binary Heap
typedef struct binary_tree_s heap_t;
```
## features
- Basic Binary Tree: Implementation of a generic binary tree.
- Binary Search Tree: Implementation of a binary search tree with common operations like insertion, deletion, and search.
- AVL Tree: Implementation of a self-balancing binary search tree.
- Max Binary Heap: Implementation of a binary heap with max-heap property.
Usage

## clone the repo
```sh
git clone https://github.com/yourusername/binary_trees.git
#include "binary_trees.h"

```
## compilation
```sh
gcc -o binary_tree_example binary_tree_example.c binary_trees.c
```
## Author
Tiana
