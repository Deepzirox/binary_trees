#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check is a node is leak
 * @node: received node
 * Return: 1 is leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return ((node->right || node->left) ? 0 : 1);
}
