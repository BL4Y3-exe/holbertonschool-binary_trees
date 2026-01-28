#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: a pointer to the node to insert the left-child in
* @value: the value to store in the new node
*
* Return: a pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *lchild;

	if (parent == NULL)
		return (NULL);

	lchild = binary_tree_t(parent, value);
	if (lchild == NULL)
		return (NULL);

	if (parent != NULL)
	{
		lchild->left = parent->left;
		parent->left->parent = lchild;
	}

	parent->left = lchild;

	return (lchild);
}
