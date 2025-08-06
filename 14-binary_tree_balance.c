#include "binary_trees.h"

/**
 * binary_tree_height - Calculate tree'es height
 * @tree: Pointer to the root node of the tree
 *
 * Return: 0 if NULL, tree's height otherwise
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (!tree)
		return (0);

	h_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	h_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((int)h_left - (int)h_right);
}

/**
 * binary_tree_balance - Calculate tree's balance
 * @tree: Pointer to the root
 *
 * Return: Balance's result
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree)
		return (0);

	height_left = tree->left ? (int)binary_tree_height(tree->left) + 1 : 0;
	height_right = tree->right ? (int)binary_tree_height(tree->right) + 1 : 0;

	return (height_left - height_right);
}
