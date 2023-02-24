#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer.
  * @n: The integer to prints.
  *
  * Return: Nothing!
  */
void print_number(int n)
{
long x;

if (x < 0)
{
_putchar('-');
x = -x;
}
if (x/10)
	_putchar(x/10);
_putchar(x%10 + '0');
}
