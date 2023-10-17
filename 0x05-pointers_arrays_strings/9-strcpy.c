#include "main.h"

/**
 * _strcpy - copy a string from src to dest
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a])
	{
		*src = *dest;
		a++;
	}

	return (dest);
}
