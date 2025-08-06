#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node
 * @tree: Pointer to the node to measure
 *
 * Return: Depth of the node (0 if tree is NULL or root)
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
