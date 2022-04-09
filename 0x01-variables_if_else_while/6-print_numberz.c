#include <stdio.h>

/**
 * main - Print numberz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nz = '0';

	while (nz <= '9')
	{
		putchar(nz);
		nz++;
	}
	putchar(10);
	return (0);
}
