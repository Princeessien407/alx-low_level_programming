#include "main.h"

/**
 * swap_int - swaps first and second value
 * @a: swaps
 * @b: swaps
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
