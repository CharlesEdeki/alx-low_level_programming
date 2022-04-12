#include "main.h"

/**
 * main - check the code
 *
 * Description: Prints the alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void) /* this is a function that prints aplabets*/
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
