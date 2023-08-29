#include "binary_trees.h"

/**
 * binary_tree_inorder - uses in-order traversal to traverse binary tree
 * @tree: pointer to the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Description: if tree or func are NULL, do nothing
 *
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
