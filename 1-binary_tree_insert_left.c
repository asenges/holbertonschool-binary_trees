#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a left node
 * @parent: Ptr parent node
 * @value: int
 * Return: Ptr new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr_left = NULL, *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	ptr_left = parent->left;
	parent->left = new_node;

	if (ptr_left)
	{
		ptr_left->parent = new_node;
		new_node->left = ptr_left;
	}
	return (new_node);
}
