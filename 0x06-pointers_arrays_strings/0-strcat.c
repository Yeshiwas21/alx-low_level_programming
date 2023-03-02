/*
 * File: 0-strcat.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"
#include <stdio.h>

/*
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
int i, len=0;
    
for(i = 0; dest[i] != '\0'; i++)
	len++;
for(i = 0; dest[i] != '\0'; i++)
	dest[len + i] = src[i];
dest[len + i] = '\0';
return (dest);
}
