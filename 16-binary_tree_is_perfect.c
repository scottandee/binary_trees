#include "binary_trees.h"

/**
  * binary_tree_is_perfect - this function checks if a binary tree is perfect
  *
  * @tree: this is a pointer to the root node of the pointer to generate
  * Return: 1 on sucess, 0 on failure
  */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (binary_tree_is_full(tree) == 1)
	{
		if (my_binary_tree_height(tree->left) == my_binary_tree_height(tree->right))
		{
			return (1);
		}
	}
	return (0);
}


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
/**
  * my_binary_tree_height - this measures the height of a tree
  *
  * @tree: this is a pointer to the root of the node to be measured
  * Return: this returns the height on success and 0 if tree is NULL
  */

size_t my_binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
	{
		return (-1);
	}

	left = 1 + my_binary_tree_height(tree->left);
	right = 1 + my_binary_tree_height(tree->right);

	if (left > right)
	{
		return (left);
	}
	else
	{
		return (right);
	}
}

