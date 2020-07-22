#include "binary_trees.h"

/**
 * binary_tree_preorder - get values in pre order
 * @tree: binary tree
 * @func: function pointer to printer
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	(*func)(tree->n);

	if (tree->left)
		binary_tree_preorder(tree->left, func);

	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
