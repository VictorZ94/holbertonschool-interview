#include "binary_trees.h"

/**
 * sorted_array_to_avl - convert from array to a AVL tree BST
 * @array: contains all data to pass to the AVL tree
 * @size: size of array
 *
 * Return: root of AVL tree
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	size_t start = 0;
	avl_t *tree;

	tree = array_to_avl(array, start, (int)size - 1, NULL);
	return (tree);
}

/**
 * array_to_avl - convert from array to a AVL tree BST
 * @array: Pointer to the first element of the array
 * @start: index to start in 0
 * @size: size of array
 * @root: root AVL tree
 *
 * Return: New node or NULL
 */
avl_t *array_to_avl(int *array, int start, int size, avl_t *root)
{
	int mid = 0;
	avl_t *new_node = NULL;

	if (start > size)
		return (NULL);

	mid = (start + size) / 2;
	new_node = NewNode(root, array[mid]);
	if (mid != start)
		new_node->left = array_to_avl(array, start, mid - 1, new_node);
	if (mid != size)
		new_node->right = array_to_avl(array, mid + 1, size, new_node);

	return (new_node);
}

/**
* NewNode - Function that inserts a node as the left-child of another
* node.
* @parent: Pointer to the node to insert the left-child in
* @value: Value to store in the new node
* Return: The new node.
*/
binary_tree_t *NewNode(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
