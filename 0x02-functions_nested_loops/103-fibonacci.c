#include <stdio.h>

/**
 * main - base function
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int c;
	int d;

	while (c <= 4000000)
	{
		c = a + b;
		if (c % 2 == 0)
			d += c;

		a = b;
		b = c;
		c++;
	}
	printf("%d\n", d);
	return (0);
}
