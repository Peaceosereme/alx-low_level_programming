#include "main.h"

/**
 * _memcpy - copies n from pointer a to pointer b
 * @src: the pointer source
 * @dest: The pointer destiny
 * @n: Int and number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	char *dp = dest;

	for (a = 0; a < n; a++)
	{
		dp[a] = src[a];
	}
	return (dp);
}
