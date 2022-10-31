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
	int x = 0;

	if (s[x] != c)
	{
		x++;
	}
	else if (s[x] == c)
	{
		return ('\0');
	}
	return (s);

}
