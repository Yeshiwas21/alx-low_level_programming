/*
 * File: 7-puts_half.c
 * Auth: Yeshiwas dagnaw
 */

#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
int i = 0;
int count = 0;
int n;

while (str[i++])
	count++;
if ((count % 2) == 0)
	n = len / 2;
else
	n = (count + 1) / 2;
for (i = n; i < count; i++)
	_putchar(str[i]);
_putchar('\n');
}

