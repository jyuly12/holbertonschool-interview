#include "palindrome.h"

/**
 * len_number - Count size of number
 * @n: Number to count
 *
 * Return: Length of number
 */
int len_number(unsigned long n)
{
	int count = 0;
	unsigned long i = 10, j = 1;

	for (; j != 0; (i *= 10), ++count)
	{
		j = n / i;
		j %= 10;
	}

	return (count);
}

/**
* is_palindrome - defines if a number is palindrome
* @n: number to be checked
*
* Return: 1 if a number is palindrome, 0 otherwise
*/
int is_palindrome(unsigned long n)
{
	unsigned long len_all, len_half, left = 1, right = 1;
	unsigned long l = 0, r = 1, i = 1, j;

len_all = len_number(n);
	if (!len_all)
		return (1);

	for (; i < len_all; ++i)
		left *= 10;


len_half = (len_all / 2);
	for (j = 0; j < len_half; ++j)
	{
		l = n / left;
		l %= 10;

		r = n / right;
		r %= 10;

		if (l != r)
			return (0);

		right *= 10;
		left /= 10;
	}

	return (1);
}
