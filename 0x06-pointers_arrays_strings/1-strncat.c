#include "main.h"

/**
*_strncat - concatenates the two strings
*that will use at most n bytes from @src
*@dest : string that will be appended
*@src : string that will be added
*@n : an integer parameter to compare index with
*Return : returns a new concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{

	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);

}
