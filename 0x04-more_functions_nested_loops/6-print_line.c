/*
 * File: 6-print_line.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: The number of _ characters to be printed.
 * */
void print_line(int n)
{
int l;

if (n > 0)
{
for (l = 1; l <= n; l++)
	_putchar('_');
}
_putchar('\n');
}
