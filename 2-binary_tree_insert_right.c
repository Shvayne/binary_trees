#include "binary_trees.h"
/***
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: Pointer to the node to insert the right child in
 * @value: Value to store in new node
 * Return: pointer to the newly created node or NULL if failed
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
    new_node->left = NULL;
    new_node->right = parent->right;

    if (parent->right != NULL)
    {
        parent->right->parent = new_node;
    }
    parent->right = new_node;

    return (new_node);
}