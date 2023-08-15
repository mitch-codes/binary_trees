#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree.
 * Depth is measured from root parent node going down.
 * @node: pointer to node to measure depth of
 *
 * Return: returns the depth of tree from given node
 */
size_t depth = 0;

size_t binary_tree_depth(const binary_tree_t *node)
{
        if (!node)
        {
                return (0);
        }
        if (node->parent)
        {
                depth = binary_tree_depth(node->parent) + 1;
                return (depth);
        }
        return (0);
}
