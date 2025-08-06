#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling of.
 *
 * Return: A pointer to the sibling node, or NULL if no sibling exists.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: A pointer to the node
 * Return: A pointer to the uncle node, NULL if none exists.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
