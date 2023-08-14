#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_postorder - transverses tree postorder i.e left - right - root
 *@tree: pointer to the root node
 *@func: function to be carried out
 *
 *Return: void
**/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
        if (tree && func)
        {
		binary_tree_inorder(tree->left, func);
                binary_tree_inorder(tree->right, func);
                func(tree);
        }
}
