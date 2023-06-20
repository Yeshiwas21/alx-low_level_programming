#include "main.h"

/**
**_strstr - function that locates a substring
*@haystack: input parameter
*@needle: input
*Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *c1 = haystack;
char *c2 = needle;

while (*c2 != '\0' && *c1 == *c2)
{
c1++;
c2++;
}
if (*c2 == '\0')
return (haystack);
}
return (0);
}
