#include "main.h"

/**
 * _puts - check the code
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}
