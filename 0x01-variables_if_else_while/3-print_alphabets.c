#include <stdlib.h>
#include <stdio.h>

/**
 * main - base function
 *
 * Return: 0
 */

int main(void)
{
	int a = 'a';
	int b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
