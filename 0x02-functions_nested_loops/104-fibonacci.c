#include <stdio.h>

/**
 * main - base function
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b;
	unsigned long int c;
	int count;

	a = 1;
	b = 2;
	c = a + b;

	printf("%d, %d, ", a, b);

	for (count = 3; count <= 98; count++)
	{
		printf("%lu, ", c);

		a = b;
		b = c;
		c = a + b;
	}
	printf("\n");
	return (0);

}
