#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a right node
 * @parent: Ptr to parent node
 * @value: int
 * Return: Ptr new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr_right = NULL, *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	ptr_right = parent->right;
	parent->right = new_node;

	if (ptr_right)
	{
		ptr_right->parent = new_node;
		new_node->right = ptr_right;
	}
	return (new_node);
}
