#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Description: a binary tree T is full if each node is either a leaf or
 * possesses exactly two child nodes
 *
 * Return: 1 if full, otherwise 0. If tree is NULL, return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftN, rightN;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leftN = binary_tree_is_full(tree->left);
	rightN = binary_tree_is_full(tree->right);

	if (leftN == 0 || rightN == 0)
		return (0);
	return (1);
}
