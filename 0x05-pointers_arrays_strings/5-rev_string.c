#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
int count = 0, i = 0;
char tmp;

while (s[i++])
	count++;
for (i = count - 1; i >= count / 2; i--)
{
tmp = s[i];
s[i] = s[count - i - 1];
s[count - i - 1] = tmp;
}
}
