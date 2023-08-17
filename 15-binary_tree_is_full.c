#include "binary_trees.h"

/**
 * binary_tree_is_full - find out if a tree is full i.e number of left and right child nodes are equal
 * @tree: the tree to be evaluated
 *
 * Return: returns 1 if tree is full and 0 if not
 **/

int binary_tree_is_full(const binary_tree_t *tree)
{
        int righttree, lefttree;

        if (!tree)
        {
                return (0);
        }

        righttree = binary_tree_is_full(tree->right) + 1;
        lefttree = binary_tree_is_full(tree->left) + 1;

        if (righttree == lefttree)
        {
                return (1);
        }
        return (0);
}
