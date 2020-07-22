#include "binary_trees.h"

/**
 * binary_tree_balance - get balance of a node
 * @tree: binary tree
 * Return: balance of node
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);
	return (left - right);
}
