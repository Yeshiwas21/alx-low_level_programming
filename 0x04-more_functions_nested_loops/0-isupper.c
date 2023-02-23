/*
 * File: 0-isupper.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */

int _isupper(int c)
{

if (isupper(c))
	return (1);
else
	return (0);
}
