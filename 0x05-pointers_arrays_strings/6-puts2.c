#include "main.h"

/**
 * puts2 - prints every other line of a string
 * @str: string
 * Return - void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		}
		else
			i++;
	}
	_putchar('\n');
}
