#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int a;
	int b;

	for (b = 1; b <= 10; b++)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
	}
	_putchar('\n');
}
