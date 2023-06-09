#include "main.h"

/**
  * _memset - fill block of memory
  * @s: starting address
  * @b: value we want
  * @n: number of bytes to change
  *
  * Return: changed array with new values for n byte
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
