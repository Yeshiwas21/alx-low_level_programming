#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr_new;
	unsigned int i;

if (new_size == old_size)
	return (ptr);

if (ptr == NULL)
{
ptr_new = malloc(new_size);
if (ptr_new == NULL)
	return (NULL);
return (ptr_new);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}

ptr_new = malloc(new_size);

if (ptr_new == NULL)
	return (NULL);

for (i = 0; i < old_size && i < new_size; i++)
{
ptr_new[i] = ((char *) ptr)[i];
}

free(ptr);
return (ptr_new);
}
