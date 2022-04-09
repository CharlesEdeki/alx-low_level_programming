#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints all alphabet
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; ++n)
	{
		if ((n != 'q') && (n != 'e'))
		putchar(n);
	}
	putchar('\n');
	return (0);
}
