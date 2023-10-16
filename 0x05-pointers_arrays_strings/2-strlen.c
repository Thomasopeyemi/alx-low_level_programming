#include <main.h>

/**
 * _strlen - returns lenght of a string
 * Return: lenght of string
 */

int _strlen(char *s)
{
  int a = 0;
  char s[];

  while (s[a] != '\0')
    {
      a++;
      return (a);
    }
}
