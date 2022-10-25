#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	char t;
	int i;
	int c;
	int l;

	i = 0;
	l = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	l = i - 1;

	for (c = 0; c < l / 2; c++)
	{
		t = s[c];
		s[c] = s[l];
		s[l] = t;
		l--;
	}
}
