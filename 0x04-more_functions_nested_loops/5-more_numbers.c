#include "main.h"

/**
 * more_numbers - prints 10 rows of the numbers 0 to 14
 *
 * Return: void.
 */

void more_numbers(void)
{
	int a = 0;
	int num = 0;

	while (a < 10)
	{
		do
		{
			putchar(num + '0');
		}
		while (num < 10);
			{
				_putchar('1');
				_putchar(num % 10 + '0');
			}
			num++;
		}
		_putchar('\n');
		a++;
	}
}
