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

for (chr = 'a'; chr <= 'z'; chr++)
{
if (chr == 'q' || chr == 'e')
	continue;
putchar(chr);
}
putchar('\n');
return (0);
}
