#include <stdio.h>
#include "main.h"

/**
*This method prints a number from 0 to 9 in new lines
*Returns nothing
*/

void print_most_numbers(void)
{
	int n;
	for (n = 48; n < 58; n++)
	{
		if (( n == 40 ) || (n == 42))
		{
			continue;
		}
		putchar(n):
	}
	putchar(10);
}
