#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int a;

	for (s[a] = '\0'; a >= 0; --a)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
