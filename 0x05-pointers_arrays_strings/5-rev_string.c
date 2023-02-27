#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
char rev;
int i, j, count = 0;

while (s[count] != '\0')
	count++;
j = count - 1;

for (i = 0; i < count; i++)
{
rev[i] = s[j];
j--;
}
}
