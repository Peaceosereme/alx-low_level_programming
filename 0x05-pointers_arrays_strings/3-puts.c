#include "main.h"

/**
 * _puts - check the code
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;
	int c;

	while ((c = *(str + i) != '\0'))
	{
	_putchar(c);
	i++;
	}
}
