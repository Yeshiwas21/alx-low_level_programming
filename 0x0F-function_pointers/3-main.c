#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int (*func)(int, int);
int num1, num2, res;

if (argc == 4)
{
if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
func = get_op_func(argv[2]);
if (func == NULL)
{
printf("Error\n");
exit(99);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
res = func(num1, num2);
printf("%d\n", res);
return (0);
}
else
{
printf("Error\n");
exit(98);
}
}
