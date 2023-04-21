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
 * _strncpy - copies up to n characters from the string pointed to,
 *	by src to dest
 * @dest: a pointer to the destination array where the content is to be copied
 * @src: the string to be copied
 * @n: number of characters to be copied from source
 * Return: the pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && *(src + i))
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}

/**
 * _strlen - returns the lenght of string
 * @s: the string whose length is to be found
 * Return: the length of string
 */

int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
	continue;
return (i);
}

/**
 * _atoi - converts the string argument str to an integer
 * @s: the string representation of an integral number
 * Return: the converted integral number as an int value
 */
int _atoi(char *s)
{
int i = 0, j, n = 0, x = 1;

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
 * _puts - writes a string to stdout
 * @str: the string to be written
 * return: non-negative value, if successful
 *	EOF, if error
 */
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return;
}
