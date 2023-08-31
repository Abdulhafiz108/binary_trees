#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: a pointer to the node to find the sibling.
 * Return: a pointer to the sibling node and NULL otherwise.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if ((node == NULL) || (node->parent == NULL))
		return (NULL);

	tmp = node->parent->right;

	if (node == node->parent->right)
		tmp = node->parent->left;

	return (tmp);
}
