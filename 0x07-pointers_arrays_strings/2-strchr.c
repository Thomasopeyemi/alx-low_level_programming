#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string to appraise
 * @c: character to be found
 *
 * Return: pointer to c
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != c; x++)
	{
		s[x];
	}

	if (s[x] == c)
		break;
	return (c);

}
