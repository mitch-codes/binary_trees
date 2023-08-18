#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: pointer to node to find sibling of
 *
 * Return:the unclee node or NULL
 **/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
        if (node == NULL || node->parent == NULL ||node->parent->parent == NULL)
        {
                return NULL;
        }
        if (node->parent->parent->left == NULL || node->parent->parent->right == NULL)
        {
                return NULL;
        }
        if (node->parent == node->parent->parent->left)
        {
                return (node->parent->parent->right);
        }
        else
        {
                return (node->parent->parent->left);
        }
}
