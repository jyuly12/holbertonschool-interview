#include "lists.h"
/**
* is_palindrome - Checks if a singly linked list is a palindrome.
* @head: pointer to head of list
* Return: 0 if it is not a palindrome, 1 if it is a palindrome
*/
int is_palindrome(listint_t **head)
{
	listint_t *tmp = *head;
	int array[2048], i = 0, j = 0, middle;

	if (head == NULL || (tmp != NULL && tmp->next == NULL))
		return (1);
	while (tmp != NULL)
	{
		array[i] = tmp->n;
		tmp = tmp->next;
		i++;
	}
	i--, middle = i / 2;
	while (i >= middle && j <= middle)
	{
		if (array[j] != array[i])
			return (0);
		i--, j++;
	}
	return (1);
}
