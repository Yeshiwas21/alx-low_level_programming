#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array == NULL)
	return (-1);
if (cmp == NULL)
	return (-1);
if (size <= 0)
	return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
	return (i);
}
return (-1);
}
