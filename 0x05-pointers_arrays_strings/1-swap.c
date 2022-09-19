#include "main.h"

/**
*swap_int() - swaps the values of two integers
*@a : first parameter
*@b : second parameter
*Returns: returns nothing
*/

void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
