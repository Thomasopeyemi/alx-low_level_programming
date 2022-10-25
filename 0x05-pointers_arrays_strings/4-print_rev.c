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
	char s, t;
	int i, len, left, right;

	len = _strlen(*s);
	left = 0;
	right = len - 1;
	for (i = left; i < right; i++)
	{
		t = s[i];
		s[i] = s[right];
		s[right] = t;
		right--;
	}
	_putchar(s[i]);

	return (0);

}
