#include "main.h"

/**
 * main - base function
 *
 * Return: 0
 */

int main(void)
{
	char a[] = "_putchar";
	int b = 0;

	while (a[b] != '\0')
	{
		_putchar(a[b]);
		b++;
	}
	_putchar('\n');
	return (0);
}
