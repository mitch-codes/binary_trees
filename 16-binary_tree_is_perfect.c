#include "binary_trees.h"

int checksize(const binary_tree_t *tree)
{
        int size;

        if (!tree)
        {
                return (0);
        }
        size = checksize(tree->left) + 1 + checksize(tree->right);
        return (size);
}

int  mybtheight(const binary_tree_t *tree)
{
        int height;

        if (tree == NULL)
        {
                return (0);
        }
        height = mybtheight(tree->left) + 1;
        return (height);
}

int  mybtrheight(const binary_tree_t *tree)
{
        int height;

        if (tree == NULL)
        {
                return (0);
        }
        height = mybtrheight(tree->right) + 1;
        return (height);
}

/**
 * binary_tree_is_perfect - check if a binary tree is perfect i.e if each node has exactly two children
 * @tree: pointer to root node of tree to check
 *
 * Return: 1 if binary tree is perfect, else return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
        int lheight = mybtheight(tree);
        int rheight = mybtrheight(tree);
        int lsize = checksize(tree->left);
        int rsize = checksize(tree->right);
	
	if (!tree)
        {
                return (0);
        }
        if (lsize != rsize || lheight != rheight)
        {
                return (0);
        }
        return (1);
}



