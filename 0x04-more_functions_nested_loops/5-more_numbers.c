#include "main.h"

/**
 * more_numbers - prints 10 rows of the numbers 0 to 14
 *
 * Return: void.
 */

void more_numbers(void)
{
	int a = 0;
	int num;

	while (a < 10)
	{
		while (num <= 14)
		{
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			num++;
		}
		_putchar('\n');
		a++;
	}
}
