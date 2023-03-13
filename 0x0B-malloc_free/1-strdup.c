#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
int n = 0, i = 1;
char *s;

if (str == NULL)
	return (NULL);
while (str[i])
{
i++;
}
s = malloc((sizeof(char) * i) + 1);
if (s == NULL)
	return (NULL);
while (n < i)
{
s[n] = str[n];
n++;
}
s[n] = '\0';
return (s);
}
