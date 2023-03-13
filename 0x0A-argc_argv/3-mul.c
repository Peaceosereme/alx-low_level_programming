#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies
 * @argc: arg size
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	/* Initializing variables before this point causes a seg fault. Why? */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
