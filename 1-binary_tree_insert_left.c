#include "binary_trees.h"

/**
  * binary_tree_insert_left - this function inserts a new_node as
  * the left-child of another node
  *
  * @parent: this is a pointer to the nodeto insert the left child in
  * @value: this is the value to be stored in the new node
  * Return: a pointer to created node on SUCCESS
  * return NULL on failure or if parent is NULL
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
		new_node->parent = parent;
		parent->left = new_node;
	}
	else
	{
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = NULL;
	}
	new_node->n = value;
	new_node->right = NULL;
	return (new_node);
}
