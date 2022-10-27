#include "main.h"
#include <stdio.h>

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
	int temp;
	int *y;

	y = a;

	for (i = 1; i < n; i++)
	{
		y++;
	}

	for (x = 0; x < i / 2; x++)
	{
		temp = a[x];
		a[x] = *y;
		*y = temp;
		x--;
	}


}
