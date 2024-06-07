#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node of tree
 * Return: 1 or 0 if is perfect or not
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
	{
		return (0);
	}
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	/*if the height of the left and right subtree is the same*/
	/*and the left and right sub tree are perfect, the current tree is perfect*/
	if (height_left == height_right)
	{
		if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		{
			return (1);
		}
	}
	return (0);
}
