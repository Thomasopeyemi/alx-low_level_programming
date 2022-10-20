#include "main.h"

/**
 * _isupper - prints all uppercase characters
 *
 * @c: letters of alphabet to check
 * Return: 1 or 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
		return (1);
	else
		return (0);

}
