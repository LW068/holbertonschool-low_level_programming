#include "main.h"

/**
* print_diagonal - function that draws a diagonal line on the terminal.
*
* @n: the number of times the character '\' should be printed.
*
* Return: no return.
*/
void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
		_putchar(a);
	{
		_putchar('\n');
	}
}
