#include "binary_trees.h"

/**
 * binary_tree_depth - get depth of a node
 * @tree: binary tree
 * Return: depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = binary_tree_depth(tree->parent);

	if (!tree->parent)
		return (0);
	return (size + 1);
}
