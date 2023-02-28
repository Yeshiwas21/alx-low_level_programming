/*
 * File: 9-strcpy.c
 * Auth: Yeshiwas dagnaw
 */

#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
strcpy(dest, src);
return (dest);
}
