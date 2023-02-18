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
int num3;
int num;

for (digit = 0; digit < 10; digit++)
{
for (num = digit + 1; num < 10; num++)
{
for (num3 = num + 1; num3 < 10; num3++)
{
if (digit != num && digit != num3 && num != num3)
{
putchar((digit % 10) + '0');
putchar((num % 10) + '0');
putchar((num3 % 10) + '0');
}
if (digit != 7)
{
putchar(',');
}
putchar(' ');
}
}
}
return (0);
}
