/*
 * File: 6-print_line.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 */
void print_line(int n)
{
int line;

if (n > 0)
{
for (line = 0; line < n; line++)
	_putchar('_');
_putchar('\n');
}
}
