#include "main.h"

/**
**_memset - a function that fills memory with a constant byte
*@s: pointed destination
*@b: Constant parameter
*@n: Number of bytes
*Return: 0
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a = 0;

for (a = 0; a < n; a++)
s[a] = b;
return (s);
}
