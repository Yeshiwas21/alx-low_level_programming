/* File: 8-print_square.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"

/**
  * print_square - Prints n squares according n number of times
  * @size: The number of squares/number of times
  *
  * Return: empty
  */
void print_square(int size)
{
int h;
int v;
int n = 10;

if (n > 0)
{
for (h = 0; h < n; h++)
{
for (v = 0; v < n; v++)
	_putchar('#');
_putchar('\n');
}
}
_putchar('\n');
}
