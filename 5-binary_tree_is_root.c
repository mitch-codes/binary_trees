#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_is_root - checks to see if node is a parent
 *@node: pointer to the node being checked
 *
 *Return: 1 if node is parent and 0 if not
**/

int binary_tree_is_root(const binary_tree_t *node)
{
        if (node)
        {
                if (node->parent == NULL)
                {
                        return (1);
                }
                else
                {
                        return (0);
                }
        }
        return (0);
}
