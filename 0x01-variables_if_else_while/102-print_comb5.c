#include <stdlib.h>
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

	for (a = 0; a < 100; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			putchar('0' + (a / 10));
			putchar('0' + (a % 10));
			putchar(' ');
			putchar('0' + (b / 10));
			putchar('0' + (b % 10));
			
			if (!(a == 98 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
