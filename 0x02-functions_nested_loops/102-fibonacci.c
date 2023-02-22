/*
 * File: 104-fibonacci.c
 * Auth: Yeshiwas dagnaw
 */

#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main()
{
int i, first_num, second_num, nextTerm;
first_num = 0;
second_num= 1;
nextTerm = first_num + second_num;

printf("%d, %d, ", first_num, second_num);
for (i = 3; i <= 50; ++i)
{
if (nextTerm != 512559680)
putchar(',');
putchar(' ');
printf("%d", nextTerm);
first_num = second_num;
second_num = nextTerm;
nextTerm = first_num + second_num;
}
printf("\n");
return 0;
}

