#include "main.h"

/**
 * _isdigit - checks if c is a single digit.
 * @c: integer tested
 * Return: 1 if digit, 0. if other
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
