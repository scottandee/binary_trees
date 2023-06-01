#include "binary_trees.h"

/**
  * binary_tree_uncle - this function finds the uncle of a node
  *
  * @node: this is a pointer to the node to find the uncle
  * Return: a pointer to the sibling on success, NULL on failure
  */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int left, right;

	if (node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->left == NULL || node->parent->parent->right == NULL)
	{
		return (NULL);
	}

	left = node->parent->parent->left->n;
	right = node->parent->parent->right->n;

	if (left == right)
	{
		return (node->parent->left);
	}
	else if (left == node->parent->n)
	{
		return (node->parent->parent->right);
	}
	else if (right == node->parent->n)
	{
		return (node->parent->parent->left);
	}
	else
	{
		return (NULL);
	}
}
