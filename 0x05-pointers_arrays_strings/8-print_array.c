#include "main.h"

/**
 * print_array - prints n element sof an array a of integers
 * @a: pointer variable
 * @n: number of times to be printed
 * Return: 0
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b <= n; b++)
	{
		printf("%d, ", a[b]);
	}
	printf("\n");
}
