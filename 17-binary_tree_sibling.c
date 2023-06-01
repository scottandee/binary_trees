#include "binary_trees.h"

/**
  * binary_tree_sibling - this function finds the sibling of a node
  *
  * @node: this is a pointer to the node to find the sibling
  * Return: a pointer to the sibling on success, NULL on failure
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int left, right;

	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == NULL || node->parent->right == NULL)
	{
		return (NULL);
	}

	left = node->parent->left->n;
	right = node->parent->right->n;

	if (left == right)
	{
		return (node->parent->left);
	}
	else if (left == node->n)
	{
		return (node->parent->right);
	}
	else if (right == node->n)
	{
		return (node->parent->left);
	}
	else
	{
		return (NULL);
	}
}
