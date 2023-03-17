#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, k = 0, len = 0;
char *concat_str;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[i])
	i++;
while (s2[k])
	k++;
if (n >= k)
	len = i + k;
else
	len = i + n;
concat_str = malloc(sizeof(char) * len + 1);
if (concat_str == NULL)
	return (NULL);
k = 0;

while (j < len)
{
if (j <= i)
	concat_str[j] = s1[j];
if (j >= i)
{
concat_str[j] = s2[k];
k++;
}
j++;
}
concat_str[j] = '\0';
return (concat_str);
}
