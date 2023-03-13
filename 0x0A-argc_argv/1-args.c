#include "main.h"
#include <stdio.h>

/**
 * main - prints number of args
 * @argc: arg size
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num = argc - 1;
	(void)argv;

	printf("%d\n", num);
	return (0);
}
