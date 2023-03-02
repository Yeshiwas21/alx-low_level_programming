/*
 * File: 2-strncpy.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
