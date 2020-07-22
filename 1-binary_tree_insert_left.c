#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert in the left node
 * @parent: parent to append value
 * @value: value of node
 * Return: New node
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent)
	{
		if (parent->left)
		{
			newNode = malloc(sizeof(binary_tree_t));
			if (!newNode)
				return (NULL);
			newNode->parent = parent->left->parent;
			newNode->left = parent->left;
			newNode->n = value;
			parent->left->parent = newNode;
			parent->left = newNode;

			return (newNode);
		}
		else
		{
			newNode = malloc(sizeof(binary_tree_t));
			if (!newNode)
				return (NULL);
			newNode->parent = parent;
			newNode->n = value;
			newNode->left = NULL;
			parent->left = newNode;

			return (newNode);
		}
	}

	return (NULL);
}
