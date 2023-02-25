#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: number of times \ should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int ln = 0;
	int sp;

	while (n > 0)
	{
		sp = ln;
		while (sp > 0)
		{
			_putchar(' ');
			sp--;
		}
		_putchar('\\');
		_putchar('\n');
		ln++;
		n--;

	}
	if (ln < 1)
		_putchar('\n');
}

