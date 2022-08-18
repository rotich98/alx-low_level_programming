#include "main.h"

/**
 * flip_bits - returns hamming distance of two bit words
 * which is the number of bits you would need to flip to get
 * from one number to another
 * @n: the first bit word
 * @m: the second bit word
 *
 * Return: the hamming distance
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int next = (sizeof(n) * BYTE_LENGHT);
	int len = 0;

	while (next--)
		len += (n >> next & 1) != (m >> next & 1);
	return (len);
}
