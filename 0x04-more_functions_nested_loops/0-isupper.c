#include "main.h"

/**
 * _isupper - prints all uppercase characters
 *
 * @c: letters of alphabet to check
 * Return: 1 or 0
 *
 */

int main(void)
{
	char c;

	c = 'A';
	_putchar("%c: %d\n", c, _isupper(c));

	c = 'a';
	_putchar("%c: %d\n", c, _isupper(c));

	return (0);

}
