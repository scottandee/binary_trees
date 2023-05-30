#include "binary_trees.h"

/**
  * binary_tree_insert_right - this function inserts a new_node as
  * the right-child of another node
  *
  * @parent: this is a pointer to the node to insert the right child in
  * @value: this is the value to be stored in the new node
  * Return: a pointer to created node on SUCCESS
  * return NULL on failure or if parent is NULL
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
		new_node->parent = parent;
		parent->right = new_node;
	}
	else
	{
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right = NULL;
	}
	new_node->n = value;
	new_node->left = NULL;
	return (new_node);
}
