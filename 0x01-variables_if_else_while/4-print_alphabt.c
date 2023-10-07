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

	while (a <= 'z')
	{
		if (!(a == 'q' || a == 'e'))
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
