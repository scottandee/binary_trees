#include "binary_trees.h"

/**
  * binary_tree_nodes - this counts the leaves of a binary tree
  *
  * @tree: this is a pointer to the root node of the tree to
  * count the number of nodes
  * Return: returns the size on success and 0 on failure
  */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right, count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		count += 1;
	}
	return (left + right + count);
}
