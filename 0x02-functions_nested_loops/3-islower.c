/*
 * File: 3-islower.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
int alphabet;

if (alphabet >= 'a' && alphabet <= 'z')
	return (1);
else
	return (0);
}
