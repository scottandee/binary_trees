#include "binary_trees.h"

/**
  * binary_tree_height - this measures the height of a tree
  *
  * @tree: this is a pointer to the root of the node to be measured
  * Return: this returns the height on success and 0 if tree is NULL
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);

	if (left > right)
	{
		return (left);
	}
	else
	{
		return (right);
	}
}
