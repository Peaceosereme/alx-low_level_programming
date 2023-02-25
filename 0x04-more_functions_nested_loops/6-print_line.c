#include "main.h"

/**
 * print_line -deaws a straight line
 * @n - number of lines to be printed
 * Return: void
 */

void print_line(int n)
{
	int line;

	for (line = 0; line <= n; line++)
	{
		if (line == '0')
			_putchar('\n');
		else
			_putchar('_');
	}
	putchar('\n');
}
