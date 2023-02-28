#include "main.h"

/**
 * print_square - as implied
 * @size: size of square
 * Return: Always 0.
 */

void print_square(int size)
{
	int al = 0;
	int b;

	while (al < 10)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
		al++;
	}
