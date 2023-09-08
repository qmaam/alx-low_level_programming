#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print numbers from 00 to 99
 * Return: Zero value
 */

int main(void)
{
	int n;

	for (n = 0; n <= 99; n++)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		if (n != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
