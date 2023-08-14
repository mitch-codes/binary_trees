#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_insert_right - create and insert right child to parent node
 *@parent: pointer to the node to insert the right-child
 *@value: value to insert in new node
 *
 *Return: return new node or NULL
**/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
        if (!parent->right)
        {
		binary_tree_t *right_node = binary_tree_node(parent, value);

		if (!right_node)
		{
			return (NULL);
		}
		parent->right = right_node;
		return (right_node);
        }
        else
        {
                binary_tree_t *right_node = malloc(sizeof(binary_tree_t));

                right_node->n = value;
                right_node->parent = parent;
                right_node->right = parent->right;
                parent->right->parent = right_node;
                parent->right = right_node;
                right_node->left = NULL;
                return (right_node);
        }
	return NULL;
}
