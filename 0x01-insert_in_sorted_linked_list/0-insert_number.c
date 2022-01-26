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
	listint_t *newNode, *tmp = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)  
		return (NULL);
	newNode->n = number;
	if (*head == NULL) 
	{
		*head = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	if (tmp->next == NULL)
	{ 
		newNode->next = NULL;
		tmp->next = newNode;
		return (newNode);
	}
	if (number <= tmp->n)
	{
		newNode->next = tmp;
		*head = newNode;
		return (newNode);
	}
	while (tmp->next != NULL)
	{
		if (number <= tmp->next->n)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			return (newNode);
		}
		tmp = tmp->next;
	}
	tmp->next = newNode;
	newNode->next = NULL;
	return (newNode);
}
