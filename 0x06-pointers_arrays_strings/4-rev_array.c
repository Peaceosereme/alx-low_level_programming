#include "main.h"

/**
 * reverse_array - reverse array content
 * @a: an array of integers
 * @n: the number of elements to to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
