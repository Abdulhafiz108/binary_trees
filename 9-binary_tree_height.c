#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of binary tree.
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

	return (left_h > right_h) ? left_h : right_h;
=======
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
>>>>>>> 94d12061ca70dc149bfb060fd817d5f416bd1d04
}
