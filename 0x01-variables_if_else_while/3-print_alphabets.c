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
	putchar('A');
	for (alpp = 'B'; alpp <= 'Z'; alpp++)
		putchar(alpp);
	return (0);
}
