#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Is a pointer to the parent node of the node to create.
 * @value: Is the value to put in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */

heap_t *heap_insert(heap_t **root, int value)
{
    heap_t *new_tree;

    if (!root)
        return (NULL);
    new_tree = *root;
    if (!new_tree)
    {
        *root = binary_tree_node(new_tree, value);
        return (*root);
    }
    return (new_tree);
}