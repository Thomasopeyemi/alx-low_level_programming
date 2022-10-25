#include "main.h"

/**
 * swap_int - swaps values of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: always 0
 *
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}
