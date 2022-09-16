#include <stdio.h>

/**
*main method - that prints either a number or
*fizz or buzz or fizzbuzz
*Return: returns 0
*/

int main(void)
{
	int n = 1;
	while(n++ < 100)
	{
		if (( n % 3 == 0 ) && ( n % 5 == 0 ))
		{
			printf('FizzBuzz ');
		}
		else if (n % 3 == 0)
		{
			printf('Fizz ');
		}
		else if (n % 5 == 0)
		{
			if (n != 100)
			{
				printf('Buzz');
			}
			else
			{
				printf('Buzz ');
			}
		}
		else
		{
			printf(n);
		}
		printf('\n');
	}
}
