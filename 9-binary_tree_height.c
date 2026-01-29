#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* binary_tree_height - measures the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height
*
* Return: height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t lHeight, rHeight;
    
    if (tree == NULL)
        return (0);
    
    lHeight = binary_tree_height(tree->left);
    rHeight = binary_tree_height(tree->right);


	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}
