#include "main.h"

/**
* more_numbers - Print 0 to 14 ten times.
*
* Return: No return.
*/
void more_numbers(void)
{
int a, ch;

for (a = 0; a <= 10; a++)
{
for (ch = 0; ch < 15; ch++)
{
if (ch >= 10)
_putchar((ch / 10) + 48);
_putchar((ch % 10) + 48);
}
_putchar('\n');
}
}
