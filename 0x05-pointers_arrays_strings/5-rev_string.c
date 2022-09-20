#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s : string to reverse
 * Return : nothing
 */

void rev_string(char *p)
{
	int len = strlen(*p);

	int i = 0;

	while (len--){
		*(p + i) = *(p + len);
		i++;
    }
}
