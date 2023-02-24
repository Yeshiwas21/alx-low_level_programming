#include "main.h"

/**
  * print_square - Prints a squarei followed by a new line
  * @size: The number of squares/number of times
  *
  * Return: empty
  */
void print_square(int size)
{
int h, v;

if (size <= 0)
	_putchar('\n');
else
{
for (h = 0; h < size; h++)
{
for (v = 0; v < size; v++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
