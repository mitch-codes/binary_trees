#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_is_leaf - checks to see if node is leaf
 *@node: pointer to the node being checked
 *
 *Return: 1 if node is leaf and 0 if not
**/

int binary_tree_is_leaf(const binary_tree_t *node)
{
        if (node)
        {
                if (node->left == NULL && node->right == NULL)
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
