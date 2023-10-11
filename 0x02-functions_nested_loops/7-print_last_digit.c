#include "main.h"

/**
 * print_last_digit - prints last digit of an integer
 * @a: integer for last digit to be printed
 * Return: 0
 */

int print_last_digit(int a)
{
	int l = a % 10;

	if (a < 0)
		l = l * -1;

	_putchar('0' + l);
	return (l);
}
