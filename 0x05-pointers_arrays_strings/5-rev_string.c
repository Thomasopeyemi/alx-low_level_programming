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
	int lt;
	int rt;

	c = 0;
	for (; *s != '\0'; s++)
	{
		c++;
	}

	l = c;
	rt = l - 1;
	lt = 0;

	for (i = lt; i < rt; i++)
	{
		t = s[i];
		s[i] = s[rt];
		s[rt] = t;
		rt--;
	}

}
