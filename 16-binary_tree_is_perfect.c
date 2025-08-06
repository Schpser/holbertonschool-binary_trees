#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a tree is perfect
 * @tree: Pointer to the root
 *
 * Return: 0 if it's NULL, 1 if it's perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;
	int left_perfect, right_perfect;

	if (!tree)
		return (0);

	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	if (!tree->left && !tree->right)
		return (1);

	if (left_depth != right_depth)
		return (0);

	left_perfect = binary_tree_is_perfect(tree->left);
	right_perfect = binary_tree_is_perfect(tree->right);

	return (left_perfect * right_perfect);
}
