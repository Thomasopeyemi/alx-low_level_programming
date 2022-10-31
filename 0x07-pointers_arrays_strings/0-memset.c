#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: memory area
 * @b: constant byte to fill in
 * @n: number of bytes to fill
 *
 * Return: the memory filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);

}
