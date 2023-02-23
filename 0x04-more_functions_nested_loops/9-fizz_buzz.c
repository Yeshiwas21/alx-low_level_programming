/* File: 9-fizz_buzz.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include <stdio.h>

/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 *        Fizz is printed instead of the number, for multiples of five,
 *        Buzz, and for multiples of both three and five, FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
int number;

for (number = 1; number <= 100; number++)
{
if ((number % 3) == 0)
	printf("Fizz");
else if ((number % 5) == 0)
	printf("Buzz");
else if ((number % 3) == 0 && (number % 5) == 0)
	printf("FizzBuzz");
else
	printf("%d", number);
if (number == 100)
	continue;
printf(" ");
}
printf("\n");
return (0);
