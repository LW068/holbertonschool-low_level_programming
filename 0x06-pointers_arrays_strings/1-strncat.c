#include "main.h"
#include <string.h>

/**
* *_strncat - function that concatenates two strings.
*
* @dest: a string.
* @src: a string.
*
* Return: dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
