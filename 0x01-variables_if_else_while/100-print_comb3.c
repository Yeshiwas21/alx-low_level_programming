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
	
for (digit = 0; digit < 10; digit++)
{
for (int num = digit + 1; num < 10; num++)
{
if (digit != num )
{
putchar((digit % 10) + '0');
putchar((num % 10) + '0');
}
if (digit != 8)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
