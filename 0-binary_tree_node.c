#include "binary_trees.h"
/**
 * binary_tree_node - btree node
 * @parent: Ptr parent node
 * @value: int
 * Return: Pt new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *ptr_new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	ptr_new_node = new_node;
	return (ptr_new_node);
}

