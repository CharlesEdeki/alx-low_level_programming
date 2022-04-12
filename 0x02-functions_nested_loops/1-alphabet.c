#include "main.h"

/**
 * main - check the code
 *
 * Description: Prints the alphabets
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
