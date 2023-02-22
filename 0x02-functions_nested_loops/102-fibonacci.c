/*
 * File: 102-fibonacci.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
unsigned long first_num = 0, second_num = 1, sum;

for (i = 0; i < 50; i++)
{
sum = first_num + second_num;
printf("%lu", sum);
first_num = second_num;
second_num = sum;
if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
