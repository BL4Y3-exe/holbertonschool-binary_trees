#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node == node->parent->left)
	{
		if (node->parent->parent->right == NULL || node->parent->parent == NULL)
		{
			return (NULL);
		}
		return (node->parent->parent->right);
	}

	if (node->parent->parent->left == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

    return (node->parent->parent->left);
}
