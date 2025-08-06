#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf (tu l'avais déjà !)
 * @node: Node to check
 * Return: 1 if leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->left == NULL && node->right == NULL);
}

/**
 * binary_tree_depth - Measures depth (tu l'avais déjà !)
 * @tree: Node to measure
 * Return: Depth (0 if NULL)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (tree && tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}

/**
 * get_depth_leftmost - Helper to find leftmost leaf depth
 * @tree: Current node
 * Return: Depth count
 */
static size_t get_depth_leftmost(const binary_tree_t *tree)
{
	size_t d = 0;

	while (tree->left)
	{
		tree = tree->left;
		d++;
	}
	return (d);
}

/**
 * check_perfect_recursive - Main recursive check
 * @tree: Current node
 * @target_d: Target depth for leaves
 * @current_d: Current depth
 * Return: 1 if perfect, 0 otherwise
 */
static int check_perfect_recursive(const binary_tree_t *tree,
								 size_t target_d, size_t current_d)
{
	int left_ok, right_ok;

	if (binary_tree_is_leaf(tree))
		return (current_d == target_d);

	if (!tree->left || !tree->right)
		return (0);

	left_ok = check_perfect_recursive(tree->left, target_d, current_d + 1);
	right_ok = check_perfect_recursive(tree->right, target_d, current_d + 1);

	return (left_ok && right_ok);
}

/**
 * binary_tree_is_perfect - Checks if tree is perfect
 * @tree: Tree root
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (check_perfect_recursive(tree, get_depth_leftmost(tree), 0));
}
