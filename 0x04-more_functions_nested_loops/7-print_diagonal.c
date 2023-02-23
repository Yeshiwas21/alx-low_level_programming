/*
 * File: 7-print_diagonal.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: The number of _ characters to be printed.
 */
void print_diagonal(int n)
{
int line;
int space;

if (n > 0)
{
for (line = 1; line <= n; line++)
{
for (space = 1; space <= line; space++)
    _putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
}
