#include<stdio.h>
#include<time.h>
#include<string.h>

/**
* main - alphabet soup
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char soup;

	for (soup = 'a'; soup <= 'z'; soup++)
	{
		if (soup != 'e' && soup != 'q')
		{
			putchar(soup);
		}
	}
	putchar('\n');
	return (0);
}
