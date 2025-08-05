#include "binary_trees.h"

/**
 * binary_tree_postorder - Going trough a tree, Post-order Traversal
 * @tree: Pointer to the root
 * @func: Pointer to the function
 *
 * Return: 1 if the node is a root, 0 otherwise (including if node is NULL)
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
