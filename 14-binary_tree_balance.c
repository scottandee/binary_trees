#include "binary_trees.h"
#include <stdio.h>
/**
  * binary_tree_balance - this measures the balance factor of a binary tree
  *
  * @tree: this is a pointer to the root node of the tree to measure
  * the balance factor
  * Return: the balance factor on sucess, 0 on failure
  */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;
	int b_factor;

	if (tree->left == NULL && tree->right != NULL)
	{
		left = (size_t) -1;
	}
	else
	{
		left = binary_tree_height(tree->left);
	}
	if (tree->right == NULL && tree->right != NULL)
	{
		right = (size_t) 1;
	}
	else
	{
		right = binary_tree_height(tree->right);
	}
	b_factor = (int) left - (int) right;

	return (b_factor);
}

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
