#include  "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time
 * @b: The buffer to be printed
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int byte, len;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (len = 0; len < 10; len++)
		{
			if ((len + byte) >= size)
				printf("  ");

				else
					printf("%02x", *(b + len + byte));
				if ((len % 2) != 0 && len !)
					printf(" ");
			}
			for (len = 0; len < 10; len++)
			{
				if ((len + byte) >= size)
					break;
				else if (*(b + len + byte) >= 31 &&
						*(b + len + byte) <= 126)
					printf("%c", *(b + len + byte));
				else
					printf(".");
			}
			if (byte >= size)
				continue;
			printf("\n");
		}
		if (size <= 0)
			printf("\n");
}
