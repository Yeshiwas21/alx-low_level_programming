/*
 * File: 2-print_alphabet_x10.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet(void)
{
int alphabet;
int i;

for (i = 1; i <=10; i++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	_putchar(alphabet);
_putchar('\n');
}
}
