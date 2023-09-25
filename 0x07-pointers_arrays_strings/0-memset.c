#include "main.h"

/**
 * The _memse() -used to set a range of memory to a specific value
 * @s: paremeter
 * @b: paremeter
 * @n: paremeter
 * Return value of _memse:set
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		*(s + i) = b;
		return (s);
	}
}
