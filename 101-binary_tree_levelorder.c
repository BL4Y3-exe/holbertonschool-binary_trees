#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order
 * traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node. The value in the node
 *        must be passed as a parameter to this function
 *
 * Description: Level-order traversal visits nodes level by level from left
 * to right. If tree or func is NULL, do nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t **queue;
	size_t front = 0, rear = 0, queue_size = 1024;
	const binary_tree_t *current;

	if (tree == NULL || func == NULL)
		return;

	queue = malloc(sizeof(binary_tree_t *) * queue_size);
	if (queue == NULL)
		return;

	queue[rear++] = tree;

	while (front < rear)
	{
		current = queue[front++];
		func(current->n);

		if (current->left != NULL)
		{
			if (rear >= queue_size)
			{
				queue_size *= 2;
				queue = realloc(queue, sizeof(binary_tree_t *) * queue_size);
				if (queue == NULL)
					return;
			}
			queue[rear++] = current->left;
		}

		if (current->right != NULL)
		{
			if (rear >= queue_size)
			{
				queue_size *= 2;
				queue = realloc(queue, sizeof(binary_tree_t *) * queue_size);
				if (queue == NULL)
					return;
			}
			queue[rear++] = current->right;
		}
	}

	free(queue);
}