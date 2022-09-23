#include "stdio.h"

/**
* FizzBuzz - program that prints the numbers from 1 to 100, followed by a new line. 
*
* @Fizz: prints multiples of three.
* @Buzz: prints multiples of five.
* @FizzBuzz: prints multiples of both three and five.
*
* Return: no return.
*/
int main(void)
{
int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}