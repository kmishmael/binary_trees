#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a given node
 * @node: a pointer to the node to analyze
 *
 * Return: pointer to sibling node or NULL if node is NULL, parent is NULL
 * or if no sibling exists
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
