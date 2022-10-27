#include "main.h"

/**
 * _strncpy - copies n bytes from a string to another
 *
 * @dest: string a
 * @src: string b
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
