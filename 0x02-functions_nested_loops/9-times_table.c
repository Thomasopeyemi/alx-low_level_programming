#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			_putchar('0' + (a * b));
			_putchar(',');
			_putchar(' ');

			if ((a * b) < 10)
				_putchar(' ');
			else
				continue;
		}
		_putchar('\n');
	}
	_putchar('\n');

}
