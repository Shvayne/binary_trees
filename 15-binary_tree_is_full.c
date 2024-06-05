#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to root node of tree
 * Return: 1 if full or 0 if Null or not full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/*if the node has no childeren it is a leaf*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	/*if the current node has exactly one child, it is not full*/
	if (tree->left == NULL && tree->right != NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right == NULL)
	{
		return (0);
	}
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
