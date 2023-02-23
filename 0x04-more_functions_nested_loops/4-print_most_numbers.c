/*
 * File: 4-print_most_numbers.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9 except for 2 and 4.
 *
 */
void print_most_numbers(void)
{
int n;

for (n = 0; n <= 9; n++)
{
if (n == 2 || n == 4)
	continue;
_putchar((n % 10) + '0');
}
_putchar('\n');
}

