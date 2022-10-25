#include "main.h"

/**
 * void reset_to_98 - reset out int value to 98
 *
 * @n: our integer
 * Return: always 0
 */

void reset_to_98(int *n)
{
	int n;

	n = 0;

	_putchar("n=%d\n", n);

	int *n = &n;
	n = 98;
	
	_putchar("n=%d\n", *n);
	return (0);

}
