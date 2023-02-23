#include "main.h"

/**
 * print_alphabet_x10 - alphabet in 10 rows
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
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
}
