#include "main.h"

/**
 * _memset - fills mem
 * @s: the pointer
 * @b: Filler
 * @n: Int
 *
 * Return: **s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int byt;
	char *mem = s;

	for (byt = 0; byt < n; byt++)
	{
		mem[byt] = b;
	}
	return (mem);
}
