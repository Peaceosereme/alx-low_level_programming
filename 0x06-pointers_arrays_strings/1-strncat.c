#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: first string
 * @src: String to be appended
 * @n: src length must not exceed this
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dl = 0;
	int sl;

	while (dest[dl] != '\0')
	{
		dl++;
	}
	for (sl = 0; sl < n && src[sl] != '\0'; sl++)
	{
		dest[dl + sl] = src[sl];
	}

	dest[dl + sl] = '\0';

	return (dest);
}
