/*
 * File: 4-rev_array.c
 * Auth: Yeshiwas Dagnaw Alemu
 */

#include "main.h"
#include <stdio.h>

/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements in the array
  */
void reverse_array(int *a, int n)
{
int temp, i;

for(i = 0; i < n/2; i++)
{
temp = a[i];
a[i] = a[n-i-1];
a[n-i-1] = temp;
}
}
