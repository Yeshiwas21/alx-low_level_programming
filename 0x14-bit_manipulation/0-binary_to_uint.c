#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int decimalNumber = 0;
int multiplicator = 1;
int i = 0;
char charCurrent;

if (b == NULL)
	return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
	return (0);
}
for (i = i - 1; i >= 0; i--)
{
charCurrent = b[i];
if (charCurrent == '1')
{
decimalNumber += multiplicator;
}
multiplicator = multiplicator * 2;
if (i == 0)
	break;
}
return (decimalNumber);
}
