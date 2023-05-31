#include "binary_trees.h"

/**
  * binary_tree_leaves - this counts the leaves of a binary tree
  *
  * @tree: this is a pointer to the root node of the node to measure
  * Return: returns the size on success and 0 on failure
  */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right, count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		count += 1;
	}
	return (left + right + count);
}
