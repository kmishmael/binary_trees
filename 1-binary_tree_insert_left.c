#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child
 * @parent: pointer to the parent node to insert left-child
 * @value: the value stored in the new node
 *
 * Return: pointer to the created node else NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);
	left_node = binary_tree_node(parent, value);
	if (left_node == NULL)
		return (NULL);
	left_node->left = parent->left;
	if (left_node->left != NULL)
		left_node->left->parent = left_node;
	parent->left = left_node;
	return (left_node);
}
