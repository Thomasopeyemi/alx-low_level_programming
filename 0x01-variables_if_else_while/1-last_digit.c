#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - grande entrance
 *
 * Return: always return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of n is %10d and is greater than 5\n", n);
		}
	else if (n == 0)
	{
		printf("Last digit of n is %10d and is 0\n", n);
		}
	else if ((n > 0) && (n < 6))
	{
		printf("Last digit of n is %10d and is less than 6 and not 0\n", n);
		}
	return (0);
}
