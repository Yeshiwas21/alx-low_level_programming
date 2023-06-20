#include "main.h"

/**
**_strncpy - copies a string
*@dest: Destination of string to be copied to
*@src: Source of string to be copied from
*@n: Number of elements to be copied
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
