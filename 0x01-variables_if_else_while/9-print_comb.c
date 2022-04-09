#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints combo
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; ++i)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
