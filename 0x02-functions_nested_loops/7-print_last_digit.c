#include "main.h"

/**
*print_last_digit - prints the last digit of a number
*
*@m: Parameter
*
*Return: n
*/

int print_last_digit(int m)
{
int n;
n = m % 10;
if (m < 0)
n = -n;
_putchar(n + '0');
return (n);
}
