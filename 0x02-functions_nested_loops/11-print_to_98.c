#include "main.h"

/**
 * print_to_98 - prints all natural integers from n to 98
 *
 * @n: starting point
 * Return: 0
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
	while (n >= 98)
	{
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');
		n--;
	}
	_putchar('\n');
	return (0);

}
