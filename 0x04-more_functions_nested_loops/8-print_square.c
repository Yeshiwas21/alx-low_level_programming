#include "main.h"

/**
  * print_square - Prints n squares according n number of times
  * @size: The number of squares/number of times
  *
  * Return: empty
  */
void print_square(int size)
{
int h, v;

if (size > 0)
{
for (h = 0; h < size; h++)
{
for (v = 0; v < size; v++)
	_putchar('#');
_putchar('\n');
}
}
_putchar('\n');
}
