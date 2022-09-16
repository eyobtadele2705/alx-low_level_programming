
#include <stdio.h>
#include "main.h"

/**
*This method: prints 10 times a number from 0 to 14 in new lines
*Returns: nothing
*/

void more_numbers(void)
{
	int a, b;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9 )
			{
				putchar((b / 10) + '0');
			}
			putchar((b % 10) + '0');
		}
		putchar(10);
	}

}

