/*
 * File: 0-isupper.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"
#include <ctype.h>

/**
 * _issupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */

int _issupper(int c)
{

if (issupper(c))
	return (1);
else
	return (0);
}
