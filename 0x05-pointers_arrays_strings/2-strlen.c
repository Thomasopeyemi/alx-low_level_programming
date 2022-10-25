#include "main.h"

/**
 * _strlen - returns string lenght
 *
 * @s: string in question
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
		r++;
	}
	return (r);

}
