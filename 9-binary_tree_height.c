#include "binary_trees.h"

/**
 * binary_tree_height - get height of a node
 * @tree: binary tree
 * Return: height of node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	if (left > right)
		return (left + 1);
	return (right + 1);
}
