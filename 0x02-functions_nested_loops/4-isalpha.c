/*
 * File: 4-isalpha.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{

if (isalpha(c))
        return (1);
else
	return (0);
}
