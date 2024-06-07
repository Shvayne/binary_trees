#include "binary_trees.h"
/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to root node
 * Return: Balance factor of the tree (int)
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((int)(left_height - right_height));
}
