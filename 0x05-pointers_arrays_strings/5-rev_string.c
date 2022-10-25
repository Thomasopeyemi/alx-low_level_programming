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
	int r;
	int l;

	r = 0;

	while (s[r] != '\0')
	{
		r++;
	}

	l = r;

	for (i = 0; i < l / 2; i++)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}
}
