#include <stdio.h>

/**
 * main - Print numbers 0 to  9
 * Return: Always 0 (Success)
 */
int main(void)

{
	char n = '0';

	while (n <= '9')
	{
		putchar(n++);
	}
	putchar(10);
	return (0);
}
