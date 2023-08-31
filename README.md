# Binary Trees

## Brief
This project is part of ALX software engineering course. It is base on data structures - binary trees
Done by:
- Mary Wanjiku
- [Kibet Ismael](https://github.com/kmishmael)

Using the followinf data structures and types for binary trees.

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
```

### Binary Search Tree

```c
typedef struct binary_tree_s bst_t;
```

### AVL Tree

```c
typedef struct binary_tree_s avl_t;
```

### Max Binary Heap

```c
typedef struct binary_tree_s heap_t;
```
