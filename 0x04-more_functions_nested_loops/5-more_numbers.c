/*
 * File: 5-more_numbers.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers from 0 to 14.
 *
 */
void more_numbers(void)
{
int n, j;

for (n = 1; n <= 10; n++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
	_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
