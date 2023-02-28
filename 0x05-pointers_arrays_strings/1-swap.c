#include "main.h"

/**
 * swap_int - swaps 2 ints
 * @a: int 1
 * @b: int 2
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw; }
