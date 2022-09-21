#include "main.h"

/**
*_strncpy - copies a string fro @src to @dest
*@dest : string to copy on
*@src : string that will be copied
*@n : max number of byte to copy
*Return : returns a copied @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
	
}
