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
