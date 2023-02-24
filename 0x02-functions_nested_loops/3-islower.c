#include "main.h"
#include <stddef.h>

/**
 * _islower - checks if int 'c' is a lowercase character.
 * @c: integer tested
 * Return: 1 if lower, 0 if not.
 */


int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
