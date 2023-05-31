#include "binary_trees.h"

/**
  * binary_tree_depth - this measures the depth of a node of a binsry tree
  *
  * @tree: this is a pointer to the root of the node to be measured
  * Return: this returns the depth on success and 0 if tree is NULL
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}

	count = 1 + binary_tree_depth(tree->parent);
	return (count);
}
