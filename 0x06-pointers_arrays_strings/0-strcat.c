#include "main.h"

/**
*_strcat - concatenates the two strings
*@dest : string that will be appended
*@src : string that will be added
*Return : returns pointer to @dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
		
	return (dest);
}
