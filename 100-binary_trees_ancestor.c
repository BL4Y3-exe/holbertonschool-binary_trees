#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    if (first == NULL || second == NULL)
        return (NULL);
    
    const binary_tree_t *pfirst = first;
    while (pfirst != NULL)
    {
        const binary_tree_t *psecond = second;
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