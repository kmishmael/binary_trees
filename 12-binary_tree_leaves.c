#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the tree to analyze
 *
 * Return: the number of leaves or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftLeaves, rightLeaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leftLeaves = binary_tree_leaves(tree->left);
	rightLeaves = binary_tree_leaves(tree->right);
	return (leftLeaves + rightLeaves);
}
