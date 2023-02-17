#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;

digit = 0;
do
{
putchar((digit % 10) + '0');
digit++;
if (digit == 10)
	continue;
putchar(',');
putchar(' ');
}
while (digit <= 9);
return (0);
}
