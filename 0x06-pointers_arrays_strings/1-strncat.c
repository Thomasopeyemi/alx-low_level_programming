#include "main.h"                                                      

/**
 * _strncat - concatenates src to dest to include n bytes
 *
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes from src to be included
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int j = 0;

	while (dest[l])
	{
		l++;
	}

	while (j < n && src[j])
	{
		dest[l] = src[j];
		l++;
		j++;
	}

	dest[l + n + 1] = '\0';

	return (dest);

}
