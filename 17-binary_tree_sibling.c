#include "binary_trees.h"
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