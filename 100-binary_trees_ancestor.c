#include "binary_trees.h"

/**
  * binary_trees_ancestor - this function finds the lowest common factor
  * of the two given nodes
  * @first: this is the pointer to the first node
  * @second: this is the ponter to the second node
  * Return: this returns a pointer to the lowest common ancestor nodeof
  * the two given nodes
  */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *temp;
	int res;

	if (binary_tree_search(first, second) == 1)
	{
		if(first->left != NULL)
		{
			return (first->left->parent);
		}
		else
		{
			return (first->right->parent);
		}
	}
	if (binary_tree_search(second, first) == 1)
	{
		if(second->left != NULL)
		{
			return (second->left->parent);
		}
		else
		{
			return (second->right->parent);
		}
	}

	temp = first->parent;
	if (first->parent->left == first)
	{
		res = binary_tree_search(first->parent->right, second);
	}
	else
	{
		res = binary_tree_search(first->parent->left, second);
	}
	if (res == 1)
	{
		return (first->parent);
	}


	while (res != 1 || temp != NULL)
	{
		if (temp->left == first)
		{
			res = binary_tree_search(temp->right, second);
		}
		else
		{
			res = binary_tree_search(temp->left, second);
		}
		if (res != 1)
		{
			temp = temp->parent;
		}
	}

	if (res == 1)
	{
		return (temp);
	}
	return (NULL);
}	

int binary_tree_search(const binary_tree_t *first, const binary_tree_t *second)
{
	int left, right;
	
	if (first == NULL)
	{
		return (0);
	}

	if (first->n == second->n)
	{
		return (1);
	}

	left = binary_tree_search(first->left, second);
	right = binary_tree_search(first->right, second);

	if (left == 1 || right == 1)
	{
		return (1);
	}
	return (0);
}
