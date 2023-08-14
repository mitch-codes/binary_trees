#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_insert_left - create and insert left child to parent node
 *@parent: pointer to the node to insert the left-child
 *@value: value to insert in new node
 *
 *Return: return new node or NULL
**/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
        if (!parent->left)
        {
		binary_tree_t *left_node = binary_tree_node(parent, value);

		if (!left_node)
		{
			return (NULL);
		}
		parent->left = left_node;
		return (left_node);
        }
        else
        {
                binary_tree_t *left_node = malloc(sizeof(binary_tree_t));

                left_node->n = value;
                left_node->parent = parent;
                left_node->left = parent->left;
                parent->left->parent = left_node;
                parent->left = left_node;
                left_node->right = NULL;
                return (left_node);
        }
	return NULL;
}
