#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* insert_node - insert a number into a sorted singly linked list.
* @head: linked list.
* @number: node to insert.
*
* Return: number of nodes.
*/

listint_t *insert_node(listint_t **head, int number)
{

	listint_t *new_node, *tmp = *head;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = number;

	if (tmp->n >= number)
	{
		new_node->next = *head;
		*head = new_node;
	}

	while (tmp->next->n < new_node->n)
	{
		tmp = tmp->next;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
