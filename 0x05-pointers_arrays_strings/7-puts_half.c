#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 *
 * Return: 0
 */

void puts_half(char *str)
{
	char str[];
	int lenght_of_the_string;
	int a = 0;
	int b;
	int c;

	while (str[a] != '\0')
	{
		a++;
	}
	b = a + 1;

	if (b % 2 > 0)
	{
		lenght_of_the_string = b - 1;
	}
	else
	{
		lenght_of_the_string = b;
	}

	c = lenght_of_the_string / 2;

	for (str[a] >= str[c]; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
