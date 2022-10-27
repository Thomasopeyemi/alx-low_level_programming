#include "main.h"

/**
 * reverse_array - reverses elements of an array
 *
 * @a: array in question
 * @n: number of elements of the array
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 1; i < n; i++)
	{
		x = (n - i);
		x++;
	}

	while (a[x] != 0)
	{
		x--;
	}


}
