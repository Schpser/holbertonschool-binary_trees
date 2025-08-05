#include "binary_trees.h"

/**
 * binary_tree_preorder - Going trough a Binary tree, Pre-order Traversal
 * @tree: Pointer to the root
 * @func: Pointer to the function
 * Return: 1 if the node or func = NULL, 0 otherwise
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
