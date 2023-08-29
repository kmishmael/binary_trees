#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the nodes in
 *
 * Description: A NULL pointer is not a node
 *
 * Return: number of nodes with at least 1 child in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftNodes, rightNodes;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	leftNodes = binary_tree_nodes(tree->left);
	rightNodes = binary_tree_nodes(tree->right);
	return (leftNodes + rightNodes + 1);
}
