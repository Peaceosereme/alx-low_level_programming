#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - write smthng
  *
  * Return: 0 (success)
  */

int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;

	if n > 0
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero");
	}
	return (0);
