#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The size of the tree, or 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_h += 1 + binary_tree_size(tree->left);

	if (tree->right)
		right_h += 1 + binary_tree_size(tree->right);

	return (left_h + right_h + 1);
}
