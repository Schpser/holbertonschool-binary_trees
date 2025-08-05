#include "binary_trees.h"

/**
 * binary_tree_height - Calculate tree'es height
 * @tree: Pointer to the root node of the tree
 *
 * Return: 0 if NULL, tree's height otherwise
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (1 + (left > right ? left : right));
}
