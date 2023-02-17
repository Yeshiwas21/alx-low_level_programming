#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int chr;

	for(chr = 'A'; chr <= 'Z'; chr++)
    {
        int lower_char = tolower(chr);
        putchar(lower_char);
    }
    putchar('\n');
	return (0);
}
