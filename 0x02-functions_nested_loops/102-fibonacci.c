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
	int n;
	int total;

	a = 1;
	b = 2;
	n = a + b;

	printf("%d, %d, ", a, b);

	for (total = 3; total <= n; total++)
	{
		printf("%d, ", n);
		a = b;
		b = n;
		n = a + b;
	}
	printf("\n");
	return (0);

}
