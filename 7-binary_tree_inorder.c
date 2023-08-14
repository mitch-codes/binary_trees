#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_inorder - transverses tree inorder i.e left - root - right
 *@tree: pointer to the root node
 *@func: function to be carried out
 *
 *Return: void
**/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
        if (tree && func)
        {
                binary_tree_inorder(tree->left, func);
                func(tree->n);
                binary_tree_inorder(tree->right, func);
        }
}
