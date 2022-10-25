#include "main.h"

/**
 * print_array - prints elements of an array
 *
 * @a: array
 * @n: elements numbers
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		printf("%d", a[z]);

		if (z != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");


}
