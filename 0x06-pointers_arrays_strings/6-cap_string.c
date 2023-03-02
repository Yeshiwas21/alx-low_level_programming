#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: string with words to capitalize
 * Return: pointer to resulting string
 */
char *cap_string(char *s)
{
char *result = s;
int i;
char spaces[] = " \t\n,.!?\"(){}";
int cap = 1;

while (*s)
{
if (cap && *s >= 'a' && *s <= 'z')
	*s -= 32;
cap = 0;
for (i = 0; i < 12; i++)
{
if (*s == spaces[i])
cap = 1;
}
s++;
}
return (result);
}
