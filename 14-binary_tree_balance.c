#include "binary_trees.h"

/**
 * binary_tree_balance - Calculate tree's balance
 * @tree: Pointeto the root
 * 
 * Return: Balance's result
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree)
		return (0);

	height_left = tree->left ? (int)binary_tree_height(tree->left) : -1;
	height_right = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (height_left - height_right);
}
