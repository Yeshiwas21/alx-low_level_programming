#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Product of two numbers.
 *         1 - If the program does not receive two arguments.
 */
int main(int argc, char *argv[])
{
int num1 = 0, num2 = 0, mul;

if (argc == 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 * num2;
printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
