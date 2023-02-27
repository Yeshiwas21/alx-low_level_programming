/*
 * File: 1-swap.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
