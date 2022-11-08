#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int y = 0;

	if (b == NULL)
		return (0);
	while (b[y])
	{
		if (b[y] != '0' && b[y] != '1')
			return (0);
		if (b[y] == '0')
			x = x << 1;
		if (b[y] == '1')
			x = (x << 1) + 1;
		y++;
	}
	return (x);
}
