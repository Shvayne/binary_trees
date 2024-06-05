#include "binary_trees.h"
/**
 * Finds the uncle of a node in a binary tree
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