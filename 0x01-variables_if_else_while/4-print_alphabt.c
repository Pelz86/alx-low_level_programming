#include <stdio.h>

/**
 * main - main function
 * Return: 0 always when successful
 */

int main(void)
{
	char i;

	for (i = 'a' ; 1 <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
