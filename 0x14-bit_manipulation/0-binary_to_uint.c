#include "main.h"


/**
 * binary_to_uint - converts a binary number to decimal
 * and return the value
 * @b: pointer to the string of numbers
 * Return: unsigned integer equivalent of binary number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int len, i, uint;

if (b == NULL)
return (0);

len = strlen(b);

uint = 0
for (i = 0; len > 0; len--, i++)
{
if (b[len] == '0')
uint += 0;
else if (b[len] == '1')
uint += npower(2, i);
else
return (0);
}

return (uint);
}


/**
 * npower - base to power
 * @base: base
 * @p: power to raise base to
 * Return: result
 */
unsigned int npower(unsigned int base, unsigned int p)
{
unsigned int i;
unsigned int result = 1;

for (i = 0; i < p; i++)
result *= base;

return (result);
}
