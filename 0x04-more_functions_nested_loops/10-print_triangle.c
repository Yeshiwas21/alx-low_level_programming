#include "main.h"

/**
  * print_triangle - Prints a triangle of squares according parameter
  * @size: The size of the squares triangle
  *
  * Return: empty
  */
void print_triangle(int size)
{
int i, j, k;

if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = size - i; j > 1; j--)
{
putchar(' ');
}
for (k = 0; k <= i; k++)
{
putchar('#');
}
putchar('\n');
}
}
}
