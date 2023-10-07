#include <stdlib.h>
#include <stdio.h>

/**
 * main - base function
 *
 * Return: 0
 */

int main(void)
{
	int a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
