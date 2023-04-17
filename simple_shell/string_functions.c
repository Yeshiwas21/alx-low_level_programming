#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _strncpy - copie a string
 * @dest: a pointer to a destination character array where the contents
 *	is to be copied
 * @src: a pointer the source character array which is to be copied
 * @n: the number of characters to be copied
 * Return:char
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && *(src + i); i++)
{
*(dest + i) = *(src + i);
}
for (i = 0; i < n; i++)
{
*(dest + i) = '\0';
}
return (dest);
}

/**
 * _strlen - Returns the lenght of string
 * @s: the string variable in which the length is to be counted
 * Return: length of string
 */

int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
continue;
}
return (i);
}

/**
 * _atoi - converts an strign s into an integer
 * @s: string representation of an integral number
 * Return: Integral value
 */
int _atoi(char *s)
{
int i = 0, n = 0, x = 1, j;

while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
{
if (s[i] == '-')
	x *= -1;
i++;
}
j = i;
while ((s[j] >= '0') && (s[j] <= '9'))
{
n = (n * 10) + x * ((s[j]) - '0');
j++;
}
return (n);
}
/**
 * _puts - Prints a string to stdout not including the null character
 * @str: A string to be written
 * return: A non-negative value, if successful
 *	On error, the function returns EOF.
 */
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
	_putchar(str[i]);
_putchar('\n');
return;
}
