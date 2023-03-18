#include <stdio.h>

/**
 * main - main function
 * Return: 0 always
 */

int main(void)

{
	char i;

	for (i = 'a' ; 1 <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; 1 <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
