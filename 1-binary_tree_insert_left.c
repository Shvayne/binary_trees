#include "binary_trees.h"
/**
 * binary_tree_insert - inserts a node as the left child of another node
 * @parent: parent of the new node
 * @value: value of the new node
 * Return: a pointer to the new node created
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
    {
        return (NULL);
    }
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL)
    {
        return (NULL);
    }
    new_node->n = value;
    new_node->parent = parent;
    /*The new node's left child becomes parent's current left child*/
    new_node->left = parent->left;
    new_node->right = NULL;

    if (parent->left  != NULL)
    {
        parent->left->parent = new_node;
    }
    parent->left = new_node;

    return (new_node);
}