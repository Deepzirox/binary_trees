#include "binary_trees.h"

/**
 * binary_tree_node - add a node with parent
 * @parent: parent node
 * @value: value of the node
 * Return: New node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	/* if parent if null you should start a new tree */
	if (!parent)
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (!new_node)
			return (NULL);
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->parent = NULL;
		new_node->n = value;
		return (new_node);
	}
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	new_node->n = value;
	return (new_node);
}
