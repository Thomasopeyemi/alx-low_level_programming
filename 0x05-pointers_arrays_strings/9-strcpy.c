#include "main.h"

/**
 * _strcpy - copy a string from src to dest
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
  while (*src)
    {
      *src = *dest;
      src++;
      dest++;
    }

  return (*dest);
}