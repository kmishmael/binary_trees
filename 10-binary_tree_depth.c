#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: the node to measure the depth of
 *
 * Return: the depth of the node or 0 if node is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (counter);
	while (tree->parent != NULL)
	{
		counter++;
		tree = tree->parent;
	}
	return (counter);
}
