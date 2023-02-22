/*
 * File: 9-times_table.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int num1, num2, multi;

for (num1 = 0; num1 <= 9; num1++)
{
putchar('0');
for (num2 = 1; num2 <= 9; num2++)
{
putchar(',');
putchar(' ');
multi = num1 * num2;
if (multi <= 9)
putchar(' ');
else
putchar((multi / 10) + '0');
putchar((multi % 10) + '0');
}
putchar('\n');
}
