#include "binary_trees.h"

/**
 * binary_tree_node - Binary tree node
 * @parent: Pointer to the parent node
 * @value: Value inside node
 *
 * Return: Pointer to the parent
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree_node = NULL;

	new_tree_node = malloc(sizeof(binary_tree_t));
	if (!new_tree_node)
		return (NULL);

	new_tree_node->n = value;
	new_tree_node->parent = parent;
	new_tree_node->left = NULL;
	new_tree_node->right = NULL;

	return (new_tree_node);
}

