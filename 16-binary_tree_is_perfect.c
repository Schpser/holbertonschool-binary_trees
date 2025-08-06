#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a tree is perfect
 * @tree: Pointer to the root
 *
 * Return: 0 if it's NULL, 1 if it's perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left > tree->right)
		return (tree->left - tree->right);

	if (tree->right > tree->left)
		return (tree->right - tree->left);

	if (tree->left == tree->right)
		return (1);

	return (0);
}
