#include "binary_trees.h"

/**
 * binary_tree_node - Establishes a binary tree node..
 * @parent: A reference to the parent node for the creation of the new node.
 * @value: Specifies the value to be assigned to the newly created node
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
