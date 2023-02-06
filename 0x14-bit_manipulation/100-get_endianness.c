#include "main.h"
/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianess(void)
{
int num;
num = 1;
if (*(char *)&num == 1)
return (1);
else
return (0);
}
