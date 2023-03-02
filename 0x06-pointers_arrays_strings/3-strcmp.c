/*
 * File: 3-strcmp.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: < 0, if s1 is less than s2.
 *         > 0, if s2 is less than s1
 *         = 0, if s1 is equal to s2
 */
int _strcmp(char *s1, char *s2)
{
return (strcmp(s1, s2));
}
