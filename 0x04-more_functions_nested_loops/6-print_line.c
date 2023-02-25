#include "main.h"

/**
 * print_line -draws a straight line
 * @n: integer for number of lines to be printed
 * Return: void
 */

void print_line(int n)
{
	int line;

	for (line = 1; line <= n; line++)
	{
		if (line == 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	putchar('\n');
}
