#include <stdlib.h>
#include <stdio.h>

/**
 * main - the function prints all alphabet
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; ++n)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
