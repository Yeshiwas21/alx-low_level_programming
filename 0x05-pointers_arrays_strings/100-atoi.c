/*
 * File: 100-atoi.c
 * Auth: Yeshiwas Dagnaw
 */

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
int res = 0;

for (int i = 0; s[i] != '\0'; ++i)
	res = res * 10 + s[i] - '0';
return res;
}
