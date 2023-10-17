#include "main.h"

/**
 * _strlen - returns lenght of a string
 * @s: string to get lenght
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
		return (a);
	}
}
