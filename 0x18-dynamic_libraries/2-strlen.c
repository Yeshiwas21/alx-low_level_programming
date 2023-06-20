#include "main.h"

/**
*_strlen - a function that returns the length of a string
*
*@s: The string parameter to get length
*
*Return: The string length
*/

int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}
