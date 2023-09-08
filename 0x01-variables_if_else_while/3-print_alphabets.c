#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print numbers from 00 to 99
 * Return: Zero value
 */

int main(void)
{
	
	char low;
	

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	
	for (low = 'A'; low <= 'Z'; low++)
        putchar(low);
	putchar('\n');
 
	return (0);
}
