#include "sort.h"

/**
 * _swap - swaps two integers
 * @a: integer to swap
 * @b: integer to swap
 */

void fn_swap(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}

/**
 * get_heap - turns an array into a max heap
 * @array: array of integers to heapify
 * @idx: current given index within array
 * @size: size of the array
 * @len: size to use as boundaries
 */
void get_heap(int *array, int i, int size, int len)
{
	int left = (i * 2) + 1;
	int right = (i * 2) + 2;
	int max = i;

	if (left > 0 && left < len && array[left] > array[max])
		max = left;
	if (right > 0 && right < len && array[right] > array[max])
		max = right;
	if (max != i)
	{
		_swap(array + max, array + i);
		print_array(array, size);
		get_heap(array, max, size, len);
	}
}
/**
 * heap_sort - sorts an array of integers
 *
 * @array: array of integers to sort
 * @size: size of the array
 */
void heap_sort(int *array, size_t size)
{
	int i = (size / 2) - 1;
	int end = size - 1;

	while (i >= 0)
	{
		get_heap(array, i, size, size);
		i--;
	}

	while (end > 0)
	{
		fn_swap(array + end, array);
		print_array(array, size);
		get_heap(array, 0, size, end);
		end--;
	}
}
