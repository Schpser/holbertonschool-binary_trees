#include "binary_trees.h"

/**
 * binary_tree_height - Calculate tree'es height
 * @tree: Pointer to the root node of the tree
 *
 * Return: 0 if NULL, tree's height otherwise
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	h_left = 1 + binary_tree_height(tree->left);
	h_right = 1 + binary_tree_height(tree->right);

	return (h_left > h_right ? h_left : h_right);
}

/**
 * binary_tree_balance - Calculate tree's balance
 * @tree: Pointer to the root
 *
 * Return: Balance's result
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (!tree)
		return (0);

	h_left = tree->left ? (int)binary_tree_height(tree->left) + 1 : 0;
	h_right = tree->right ? (int)binary_tree_height(tree->right) + 1 : 0;

	return (h_left - h_right);
}
