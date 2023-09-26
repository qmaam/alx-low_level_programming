#include "main.h"

/**
 * *_memset - used to fill a block of memory with a specified value
 * @s: distination
 * @b: constant
 * @n: byte
 * Return: nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
