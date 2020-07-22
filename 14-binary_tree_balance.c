#include "binary_trees.h"


/**
 * height - get height of a node
 * @tree: binary tree
 * Return: height of node
 */

size_t height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	if (left > right)
		return (left + 1);
	return (right + 1);
}



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

	left = height(tree->left);
	right = height(tree->right);
	return (left - right);
}
