#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree, or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0;
	int right_h = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_h += 1 + binary_tree_balance(tree->left);

	if (tree->right)
		right_h += 1 + binary_tree_balance(tree->right);

	return (left_h - right_h);
}
