#include "binary_trees.h"
/**
 * binary_tree_is_leaf - is_leaf
 * @node: Ptr to node
 * Return: int
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!(node->left) && !(node->right))
		return (1);

	return (0);
}
