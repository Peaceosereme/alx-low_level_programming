#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int l = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, l\n);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0", n, l\n);
	}
	else if (l < 6; l != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, l\n);
	}
	return (0);
}
