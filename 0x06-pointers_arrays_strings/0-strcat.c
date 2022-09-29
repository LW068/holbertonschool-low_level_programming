#include "main.h"
#include <string.h>

/**
* *_strcat - function that concatenates two strings.
*
* @src: a string.
* @dest: a string.
*
* Return: pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
