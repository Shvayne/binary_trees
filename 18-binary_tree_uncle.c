#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle or NULL if none
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	/*return the sibling of the parent node(the uncle)*/
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - find the sibling of a node
 * @node: the node in question
 * Return: pointer to the sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
        if (node == NULL || node->parent == NULL)
        {
                return (NULL);
        }
        /*check if the node is the left child of its parent*/
        if (node->parent->left == node)
        {
                /*return the right as the sibling*/
                return (node->parent->right);
        }
        return (node->parent->left);
}
