#include "main.h"
/**
 * print_chessboard - prints the chessboard
 *
 * @a: the row of the array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i <= 7; i++)
{
for (j = 0; j <= 7; j++)
{
if (j == 7)
{
_putchar(a[i][j]);
_putchar('\n');
}
else
	_putchar(a[i][j]);
}
}
}

