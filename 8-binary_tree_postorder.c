#include "binary_trees.h"

/**
 * binary_tree_postorder - get values in pre order
 * @tree: binary tree
 * @func: function pointer to printer
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
		postorder(tree->left, func);

	if (tree->right)
		postorder(tree->right, func);

	func(tree->n);
}
