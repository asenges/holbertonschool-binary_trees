#ifndef BINTREE
#define BINTREE
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * struct binary_tree_s - Btree node
 * @n: Int
 * @parent: Ptr parent node
 * @left: Ptr left node
 * @right: Ptr right node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
#endif
