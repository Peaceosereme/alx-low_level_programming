#include "main.h"

/**
 * *rot13 - replace characters with the 13th letter after
 * @s: string to be rot-13ed
 * Return: s
 */

char *rot13(char *s)
{
	int a;
	int b;
	char alpp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alp[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; alpp[b] != '\0'; b++)
		{
			if (s[a] == alpp[b])
			{
				s[a] = alp[b];
				break;
			}
		}
	}
	return (s);
}
