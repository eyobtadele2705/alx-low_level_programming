#include "main.h"

/**
* _strchr - locates a character in string
* @s : string to check
* @c : character to find
*
* Return : pointer to location in s for c or null
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
