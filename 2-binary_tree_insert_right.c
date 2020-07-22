#include "binary_trees.h"


/**
 * binary_tree_insert_right - insert in the right node
 * @parent: parent to append value
 * @value: value of node
 * Return: New node
 **/


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent)
	{
		if (parent->right)
		{
			newNode = malloc(sizeof(binary_tree_t));
			if (!newNode)
				return (NULL);
			newNode->parent = parent->right->parent;
			newNode->right = parent->right;
			newNode->n = value;
			parent->right->parent = newNode;
			parent->right = newNode;

			return (newNode);
		}
		else
		{
			newNode = malloc(sizeof(binary_tree_t));
			if (!newNode)
				return (NULL);
			newNode->parent = parent;
			newNode->n = value;
			newNode->right = NULL;
			parent->right = newNode;

			return (newNode);
		}
	}

	return (NULL);
}
