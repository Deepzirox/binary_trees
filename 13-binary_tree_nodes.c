#include "binary_trees.h"

/**
 * binary_tree_nodes - get nodes of a node
 * @tree: binary tree
 * Return: nodes of node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t l_nodes = binary_tree_nodes(tree->left);
	size_t r_nodes = binary_tree_nodes(tree->right);
		
	if (!tree->parent)
		r_nodes += 1;

	if (tree->right)
		return (r_nodes + 1);
	if (tree->left)
		return (l_nodes + 1);
	else
		return (0);
}