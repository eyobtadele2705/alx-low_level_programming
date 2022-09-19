#include "main.h"

/**
*swap_int - swap the values of two variables
*@a : first parameter
*@b : second parameter
*Return : nothing
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;

	*b = tmp;
}
