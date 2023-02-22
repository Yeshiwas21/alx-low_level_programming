/*
 * File: 103-fibonacci.c
 * Auth: Yeshiwas dagnaw Alemu
 */

#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long first_num = 0, second_num = 1, sum;
float total_sum;

while (1)
{
sum = first_num + second_num;
if (sum > 4000000)
break;
if ((sum % 2) == 0)
total_sum += sum;
first_num = second_num;
second_num = sum;
}
printf("%.0f\n", total_sum);
return (0);
}
