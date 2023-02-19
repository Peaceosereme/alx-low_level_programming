#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int alp;
	int alpp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	alpp = 'A';
	for (alpp = 'A'; alpp <= 'Z'; alpp++)
		putchar(alpp);
	putchar('\n');
	return (0);
}
