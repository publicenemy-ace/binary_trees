#include "binary_trees.h"

/**
 * bst_search - looks for a value in a binary search tree.
 * @tree: pointer to root node of the BST to look for.
 * @value: The value to look for in the BST.
 * Return: If tree is NULL or the value cannot be found, NULL.
 *         Otherwise, a pointer to the node containing the value.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
