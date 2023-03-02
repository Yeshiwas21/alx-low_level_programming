/*
 * File: 4-rev_array.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"
#include <stdio.h>

/**
  * reverse_array - reverses the content of an array of integers.
  * @a: An array of integers.
  * @n: The number of elements in the array.
  *
  * Return: Reversed array
  */
void reverse_array(int *a, int n)
{
int tmp, i;

for(i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = tmp;
}
}
