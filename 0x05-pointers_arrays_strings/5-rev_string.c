#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
int i, count, j;
char *a, temp;
a = s;

while (s[count] != '\0')
	count++;
for (j = 1; j < count; j++)
	a++;
for (i = 0; i < (count / 2); i++)
{
temp = s[i];
s[i] = *a;
*a = temp;
a--;
}
}
