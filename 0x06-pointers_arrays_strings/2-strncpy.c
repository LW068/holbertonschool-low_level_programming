#include "main.h"
#include <string.h>

/**
* *_strncpy - function taht copies a string.
*
* @dest: a string
* @src: a string.
* @n: character(s).
*
* Return: 0 is success.
*/
char *_strncpy(char *dest, char *src, int n)
{
strncpy(src, dest, n);
return (0);
}
