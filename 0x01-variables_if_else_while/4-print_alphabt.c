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
	char soup[24];"abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(soup[i]);
	}
	putchar('\n');
	return (0);
