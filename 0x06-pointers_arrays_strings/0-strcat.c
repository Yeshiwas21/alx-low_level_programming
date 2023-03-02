/*
 * File: 0-strcat.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strcat - concatenates two strings.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
strcat(dest, src);
return (dest);
}
