#include "binary_trees.h"

/**
 * binary_tree_insert_left - Places a node as the left-child of 
 * another node within a binary tree..
 * @parent: The reference for the insertion of the left child node.
 * @value: Specifies the value to be assigned to the newly created node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If the parent node already has a left child, 
 * the new node will replace it, and the old left 
 * child will become the left child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
