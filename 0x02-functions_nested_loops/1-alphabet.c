#include "main.h"

/**
 * print_alphabet - Prints a to z
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
}
