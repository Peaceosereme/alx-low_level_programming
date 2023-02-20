#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * Return: 0 (success)
 */

int main(void)
{
	char alp[27] = "abcdefghijklmnopqrstuvwxyzs";
	int i;

	for (i = 26; i >= 0; i--)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
