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
putchar((digit % 10) + '0');
if (digit == 9)
	continue;
putchar(',');
putchar(' ');
}
return (0);
}

