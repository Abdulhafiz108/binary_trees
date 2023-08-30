#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The size of the tree, or 0 if tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	left_h = binary_tree_leaves(tree->left);
	right_h = binary_tree_leaves(tree->right);
	return (right_h + left_h);
}
