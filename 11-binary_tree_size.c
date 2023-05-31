#include "binary_trees.h"

/**
  * binary_tree_size - this measures the size of a binary tree
  *
  * @tree: this is a pointer to the root node of the node to measure
  * Return: returns the size on success and 0 on failure
  */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
