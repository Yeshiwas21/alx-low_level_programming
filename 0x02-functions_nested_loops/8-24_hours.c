#include "main.h"

/**
*jack_bauer - prints every minute of the day of Jack Bauer
*
*Returns: ..
*/

void jack_bauer(void)
{
int m, n, k, l;
for (m = 0; m <= 2; m++)
{
for (n = 0; n <= 9; n++)
{
if ((m <= 1 && n <= 9) || (m <= 2 && n <= 3))
{
for (k = 0; k <= 5; k++)
{
for (l = 0; l <= 9; l++)
{
_putchar(m + '0');
_putchar(n + '0');
_putchar(58);
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
}
}
}
}
}
}
