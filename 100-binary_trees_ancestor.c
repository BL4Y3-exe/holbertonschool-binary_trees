#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *pfirst = first;
	const binary_tree_t *psecond = second;

	if (first == NULL || second == NULL)
		return (NULL);

	while (pfirst != NULL)
	{
		while (psecond != NULL)
		{
			if (pfirst == psecond)
				return ((binary_tree_t *)pfirst);
			psecond = psecond->parent;
		}
		pfirst = pfirst->parent;
	}
	return (NULL);
}