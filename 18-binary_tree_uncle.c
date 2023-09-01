#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: a pointer to the node to find the uncle.
 * Return: a pointer to the uncle node and NULL otherwise.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	tmp = node->parent->parent->right;

	if (node->parent == node->parent->parent->right)
		tmp = node->parent->parent->left;

	return (tmp);
}
