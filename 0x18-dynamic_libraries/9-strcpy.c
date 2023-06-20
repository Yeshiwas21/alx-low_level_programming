#include "main.h"

/**
**_strcpy - copies the string pointed to by src
*including the terminating null byte (\0)
*to the buffer pointed to by dest
*@dest: Destination value
*@src: Source value
*Return: dest pointer
*/

char *_strcpy(char *dest, char *src)
{
int a;

for (a = 0; src[a]; a++)
{
dest[a] = src[a];
}
dest[a++] = '\0';
return (dest);
}
