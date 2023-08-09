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
	binary_tree_t *left_node = binary_tree_node(parent, value);

	if (!parent->left)
	{
		parent->left = left_node;
	}
	else
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	return (left_node);
}
