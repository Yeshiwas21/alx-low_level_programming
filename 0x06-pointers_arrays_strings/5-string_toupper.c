#include "main.h"
#include <stdio.h>

/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @ch: the character to be converted to uppercase
  *
  * Return: the uppercase character corresponding to the ch
  */
char *string_toupper(char *ch)
{
int i;

for (i = 0; ch[i] != '\0'; i++)
{
if (ch[i] >= 'a' && ch[i] <= 'z')
	ch[i] = (int)ch[i] - 32;
}
return (ch);
}
