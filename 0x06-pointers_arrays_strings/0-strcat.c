#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: first string
 * @src: String to be appended
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dl = 0;
	int sl = 0;

	while (dest[dl] != '\0')
	{
		dl++;
	}
	while (src[sl] != '\0')
	{
		dest[dl] = src[sl];
		dl++;
		sl++;
	}
	dest[dl++] = '\0';

	return (dest);
}
