#include <stdio.h>

/**
 * main- Entry point
 * Description: Print alphabet in reverse
 * Return: Zero value
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
