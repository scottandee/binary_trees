#include "binary_trees.h"

/**
  * binary_tree_is_full - this function checks if a binary tree is full
  *
  * @tree: this is a pointer to the root node of the tree to check
  * Return: returns 1 if tree is full and 0 otherwise
  */


int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if ((left == 0 && right == 0) || (left == 1 && right == 1))
	{
		return (1);
	}
	return (0);
}
