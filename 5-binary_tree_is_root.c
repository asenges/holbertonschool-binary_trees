#include "binary_trees.h"
/**
 * binary_tree_is_root - is_root
 * @node: Ptr to node
 * Return: int
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);

	return (0);
}
