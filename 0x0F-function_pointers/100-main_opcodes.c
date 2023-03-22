#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
char *add;
int i, bytes;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (atoi(argv[1]) < 0)
{
printf("Error\n");
exit(2);
}
add = (char *)&main;
bytes = atoi(argv[1]);
for (i = 0; i < bytes - 1; i++)
{
printf("%02hhx ", add[i]);
}
printf("%02hhx\n", add[i]);
return (0);
}

