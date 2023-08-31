#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The balance factor of the tree, or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (0);

	left_h = (int)binary_tree_height(tree->left);
	right_h = (int)binary_tree_height(tree->right);

	return (left_h - right_h);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: The height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_h += 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_h += 1 + binary_tree_height(tree->right);

	return ((left_h > right_h) ? left_h : right_h);
}
