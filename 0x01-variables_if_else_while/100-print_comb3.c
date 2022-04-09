#include <stdlib.h>
#include <stdio.h>

/**
 * main - the function main use printf to print numbers
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;
	int a = 0;
	int j = 49;

	for (i = 48; i <= 56; ++i)
	{
		for (; j <= 57; ++j)
		{

			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
		a++;
		j = 49 + a;
	}
	putchar('\n');
	return (0);
}
