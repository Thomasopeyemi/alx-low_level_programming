#include "main.h"

/**
 * puts2 - prints every other character in a string, starting with the first character, followed by a new line
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	char str[];
	int a;

	_putchar(str[0]);

	for (a = 2; str[a] != '\0'; a++)
	{
		if (a % 2 = 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
