/*
 * File: 6-puts2.c
 * Auth: Yeshiwas Dagnaw
 */

#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
int i = 0;
int count = 0;

while (str[i++])
	count++;
for (i = 0; i < count; i = i + 2)
	_putchar(str[i]);
_putchar('\n');
}
