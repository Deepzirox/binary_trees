#include "binary_trees.h"

/**
 * binary_tree_leaves - get leaves of a node
 * @tree: binary tree
 * Return: leaves of node
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int n = 0;

	if (tree->right)
		n++;

	if (tree->left)
		n++;

	if (!tree->right && !tree->left)
		n++;

	return (n);
}