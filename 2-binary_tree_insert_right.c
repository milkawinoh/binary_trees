#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *       The value in the node must be passed as a parameter to this function.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n); 
		binary_tree_preorder(tree->left, func); 
		binary_tree_preorder(tree->right, func);
	}
}

=======
 * binary_tree_insert_right - Inserts a node as the right-child of another node.
 * @parent: Pointer to the parent node.
 * @value: Integer value to store in the new node.
 *
 * Return: Pointer to the newly created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
>>>>>>> d94a690383c7fa5f6c00814a5ab2607628275d48
