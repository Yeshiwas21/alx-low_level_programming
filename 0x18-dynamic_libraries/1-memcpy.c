#include "main.h"

/**
**_memcpy - a function that copies memory area.
*@dest: Destination
*@src: Source
*@n: Number of integers
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int a;
int b;

a = 0;
b = n;
for (; a < b; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
