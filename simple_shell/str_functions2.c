#include "main.h"

/**
 * _strcmp - Compares two Strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * Return: 0 if s1 is equal to s2
 *	> 0 if s2 is less than s1
 *	 < 0 if s1 is less than s2
 */
int _strcmp(char *s1, char *s2)
{
int result = 0, i, len1, len2;
len1 = _strlen(s1);
len2 = _strlen(s2);

if (s1 == NULL || s2 == NULL)
	return (1);
if (len1 != len2)
	return (1);
for (i = 0; s1[i]; i++)
{
if (s1[i] != s2[i])
{
result = s1[i] - s2[i];
break;
}
else
	continue;
}
return (result);
}

/**
 * _isalpha -  checks if the passed character is alphabetic
 *@c: the character to be checked
 * Return: non-zero value if c is an alphabet, else it returns 0
 */
int _isalpha(int c)
{
if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
{
return (1);
}
else
{
return (0);
}
}

/**
 * _itoa - Convert Integer to string
 * @n: Int to be Converted
 * Return: string pointer
 */
char *_itoa(unsigned int n)
{
int len = 0, i = 0;
char *str;

len = intlen(n);
str = malloc(len + 1);
if (!str)
	return (NULL);
*str = '\0';
while (n / 10)
{
str[i] = (n % 10) + '0';
n = n / 10;
i++;
}
str[i] = (n % 10) + '0';
array_rev(str, len);
str[i + 1] = '\0';
return (str);
}

/**
 *  array_rev - Reverse an array
 * @arr:Array to be reverse
 * @len: Length Of Array
 * Return: Void(Reverse Array)
 */
void array_rev(char *arr, int len)
{
int i;
char tmp;

for (i = 0; i < (len / 2); i++)
{
tmp = arr[i];
arr[i] = arr[(len - 1) - i];
arr[(len - 1) - i] = tmp;
}
}

/**
 * intlen - Determine Length Of Int
 * @num: Given Int
 * Return: Length Of Int
 */
int intlen(int num)
{
int len = 0;

while (num != 0)
{
len++;
num = num / 10;
}
return (len);
}
