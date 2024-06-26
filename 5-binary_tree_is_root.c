#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if the given node is a root
 * @node: The node to check
 * Return: 1 if true or zero otherwise
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	return (1);
}
