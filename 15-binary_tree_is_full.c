#include "binary_trees.h"

/**
 * is_recursive - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 * Return: If tree is not full, 0.
 * Or, 1.
 */
int is_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_recursive(tree->left) == 0 ||
		    is_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 * Return: If tree is NULL or is not full - 0.
 * Or - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_recursive(tree));
}
