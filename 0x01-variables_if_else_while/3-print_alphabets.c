#include <stdlib.h>
#include <time.h>
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
		putchar(n);
	}
	for (n = 'A'; n <= 'Z'; ++n)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
