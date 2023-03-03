#include "main.h"

/**
 * string_toupper - convert lowercase to uppercase
 * @s: string
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int l;

	for (l = 0; s[l] != 0; l++)
	{
		if (s[l] > 96 && s[l] < 123)
		{
			s[l] -= 32;
		}
	}
	return (s);
}

