#include "main.h"

/**
 * *leet - replacemeents, get the replacemeents
 * @s: string to be tampered with
 * Return: s.
 */

char *leet(char *s)
{
	int a;
	int b;
	char l[] = "aeotl";
	char u[] = "AEOTL";
	char n[] = "43071";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; l[b] != '\0' && u[b] != '\0'; b++)
		{
			if (s[a] == l[b] || s[a] == u[b])
			{
				s[a] = n[b];
			}
		}
	}
	return (s);
}
