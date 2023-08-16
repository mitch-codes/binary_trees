#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes that have at least one child
 * @tree: The tree to be evaluated
 *
 * Return: 0 when tree is NULL or a recursive function call
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
        size_t numnodes;

        if (!tree)
        {
                return (0);
        }
        numnodes = binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right);
        if (tree->left == NULL && tree->right == NULL)
        {
                return (0);
        }
        return (numnodes);
}
