#include "binary_trees.h"

/**
 * binary_tree_inorder - get values in pre order
 * @tree: binary tree
 * @func: function pointer to printer
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
		inorder(tree->left, func);

	(func)(tree->n);

	if (tree->right)
		inorder(tree->right, func);
}
