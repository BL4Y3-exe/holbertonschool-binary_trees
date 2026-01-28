#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
* binary_tree_insert_right - inserts a node as the left-child of another node
* @parent: a pointer to the node to insert the left-child in
* @value: the value to store in the new node
*
* Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rchild;

	if (parent == NULL)
		return (NULL);

	rchild = malloc(sizeof(binary_tree_t));
	if (rchild == NULL)
		return (NULL);

	rchild->n = value;
	rchild->parent = parent;
	rchild->left = NULL;
	rchild->right = parent->right;

	if (parent->right != NULL)
		rchild->right->parent = rchild;

	parent->right = rchild;

	return (rchild);
}
