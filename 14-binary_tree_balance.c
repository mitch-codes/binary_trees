#include "binary_trees.h"

int checkRight(const binary_tree_t *tree)
{
        int right;

        if (!tree)
        {
                return (0);
        }

        right = checkRight(tree->right) + 1;
        return (right);
}

int checkLeft(const binary_tree_t *tree)
{
        int left;

        if (!tree)
        {
                return (0);
        }

        left = checkLeft(tree->left) + 1;
        return (left);
}

/**
 * binary_tree_balance - checking if the binary tree is balanced
 * @tree: the tree to be evaluated
 *
 * Return: returns balance factor i.e left - right;
 */
binary_tree_balance(const binary_tree_t *tree)
{
        int righttree, lefttree;

        if (!tree)
        {
                return (0);
        }

        righttree = checkRight(tree);
        lefttree = checkLeft(tree);

	return (lefttree - righttree);
}
