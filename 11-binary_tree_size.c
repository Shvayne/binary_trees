#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	/*recursively compute the size of the left and right subtrees*/
	size_t left = binary_tree_size(tree->left);
	size_t right = binary_tree_size(tree->right);

	return (1 + left + right);
}
