#include "main.h"

/**
 * _puts - prints a string to std-o
 * @str: string
 * Return: 0
 */

void _puts(char *str)
{
	char str[];
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
