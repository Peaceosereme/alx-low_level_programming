#include "main.h"

/**
 * rev_string - prints string, then in reverse
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	while (*s[c] != '\0')
	{
		c++;
	}

	c = c - 1;

	while (c >= 0)
	{
		_putchar(*s[c]);
		c--;
	}
	_putchar('\n');
}
