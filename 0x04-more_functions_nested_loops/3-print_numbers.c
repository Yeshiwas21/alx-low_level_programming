/*
 * File: 3-print_numbers.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"

/**
 * print_numbers - rints the numbers, from 0 to 9, followed by a new line.
 * @n: The character to be checked.
 *
 */

int print_numbers(int n)
{
for (n = 0; n <= 9; n++)
	_putchar((n % 10) + '0');
_putchar('\n');
}
