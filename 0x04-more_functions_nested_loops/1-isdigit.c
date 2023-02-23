/*
 * File: 1-isdigit.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks for a digit(0 through 9).
 * @c: The character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{

if (isdigit(c))
	return (1);
else
	return (0);
}
