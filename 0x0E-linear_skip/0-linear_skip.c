#include "search.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search
 *
 * Return: Pointer on the first node where value is located or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t i;
	skiplist_t *tmp = list, *tmp1 = list;

	if (!list)
		return (NULL);

	while (tmp->next && (tmp->n) < value)
	{
		tmp1 = tmp;

		if (tmp->express)
		{
			tmp = tmp->express;

			printf("Value checked at index [%lu] = [%d]\n",
			       tmp->index, tmp->n);
		}
		else
			while (tmp->next)
				tmp = tmp->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       tmp1->index, tmp->index);

	i = tmp1->index;
	while (i <= (tmp->index) && (tmp1->n <= value))
	{
		printf("Value checked at index [%lu] = [%d]\n", i, tmp1->n);
		if ((tmp1->n) == value)
			return (tmp1);

		i++;
		tmp1 = tmp1->next;
	}

	if (tmp1)
		printf("Value checked at index [%lu] = [%d]\n", i, tmp1->n);

	return (NULL);
}
