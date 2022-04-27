#include "search_algos.h"

/**
* advanced_binary - Searches for a value in a sorted array of integers.
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in array
* @value: Value to search for
*
* Return: Index where value is located
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0, left = 0, right, mid;
	int tmp;


	if (!array || size == 1)
		return (-1);
	right = size - 1;

	printf("Searching in array: ");

	for (i = left; i < right; i++)
		printf("%i, ", array[i]);

	printf("%i\n", array[right]);

	mid = (left + right) / 2;

	if (array[mid] == value)
	{
		if (array[mid - 1] < value)
			return (mid);
	}

	if (array[mid] < value)
	{
		left += mid + 1;
		array += mid + 1;
		if (size % 2 != 0)
			mid--;
	}

	mid++;
	tmp = advanced_binary(array, mid++, value);

	if (tmp != -1)
		return (tmp + left);

	return (-1);
}
