#include "binary_trees.h"
/**
 * binary_tree_preorder - Goes through the binary tree using pre-order travasal
 * @tree: pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	/*visit the first node*/
	func(tree->n);
	/*traverse left nd right subtree*/
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
