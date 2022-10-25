#include "main.h"

/**
 * print_rev - prints in reverse
 *
 * @s: string to print
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int l;
	int i;
	int r;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	l = i;

	for (r = l - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}

	_putchar('\n');

}
