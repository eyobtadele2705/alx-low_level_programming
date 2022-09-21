#include "main.h"

/**
*leet - leet encoder
*@str : string
*
*Return : addresses of the encoded string
*/

char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform(str[i]);
		i++;
	}
	return (str);
}

/**
*transform - to map a letter to its leet encoding
*@s : character to be encoded
*
*Return : the encoded character
*/

char transform(char s)
{
	char mapping_low[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char mapping-upper[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};
	int i = 0;
	char repl = s;

	while (i < 8)
	{
		if ( s == mapping_low[i] || s == mapping_upper[i])
		{
			repl = i + '0';
			break;
		}
		i++;
	}
	return (repl);
}
