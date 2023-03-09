#include "main.h"

/**
 * _strchr - finds char in string
 * @s: pointer to string
 * @c: char
 * Return: pointer to c.
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!s)
		{
			return (NULL);
		}
	}
	return (NULL);

}
