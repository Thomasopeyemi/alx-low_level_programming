#include "main.h"

/**
 * print_times_table - prints n timestable
 *
 * @n: modular timestable to be printed
 * Return: 0
 */

void print_times_table(int n)
{
	int a;
	int b;

	if (n > 15 || n < 0)
		continue;
	else
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				_putchar('0' + (a * b));
				_putchar(',');
				_putchar(' ');

				if (a * b < 10)
					_putchar(' ');
					_putchar(' ');
				else if (a * b >= 10 && a * b < 100)
					_putchar(' ');
				else
					continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
	return (0);

}
