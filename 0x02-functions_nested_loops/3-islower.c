#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character.
 * @c: the character to be checked
 * Return: 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
