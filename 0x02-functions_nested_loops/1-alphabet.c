#include "main.h"

/**
 * main - Entry
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alp[i]);
	}
	_putchar('\n');
	return;
}
