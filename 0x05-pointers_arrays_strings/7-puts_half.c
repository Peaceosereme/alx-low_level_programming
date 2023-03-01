#include "main.h"

/**
 * puts_half - 2nd half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int h, sh;
	char *strh;

	strh = str;
	while (*str != '\0')
	{
		len++;
		str++;
	}

	str = strh;
	if (len % 2 == 0)
	{
		h = len / 2;
	}
	else
	{
		h = (len + 1) / 2;
	}
	for (sh = h; sh < len; sh++)
		_putchar(str[sh]);
	_putchar('\n');
}
