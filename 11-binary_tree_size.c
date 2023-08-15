#include "binary_trees.h"

/**
 * binary_tree_size - get the size of binary tree (number of nodes)
 * @tree: root node of the tree
 *
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
        size_t node_size;

        if (!tree)
        {
                return (0);
        }
        node_size = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);
        return (node_size);
}
