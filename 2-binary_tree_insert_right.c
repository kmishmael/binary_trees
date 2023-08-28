#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: a pointer to the node to insert the right child in
 * @value: the value contained in the new node
 *
 * Description: if the parent has a right child, the new node must take its
 * place and the old right child must be set as the right child of the new node
 *
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);
	right_child = binary_tree_node(parent, value);
	if (right_child == NULL)
		return (NULL);
	right_child->right = parent->right;
	if (right_child->right != NULL)
		right_child->right->parent = right_child;
	parent->right = right_child;
	return (right_child);
}
