#include "main.h"
#include <stdio.h>
/**
 *_memset -   fills memory with a constant byte
 *@size: pointer block of memory to fill
 *@buffer: value to set
 *@n: bytes of the memory
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	/*Delacring FOR*/
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/

	} /*END FOR*/

	return (s);
}
