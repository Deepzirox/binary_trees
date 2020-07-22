#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is root
 * @node: received node
 * Return: 1 if is root 0 is not
 */


int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return ((!node->parent) ? 1 : 0);
}
