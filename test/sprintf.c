#include <stdio.h>
#include "main.h"
/**
 * formatAndPrint - Formats and prints various number representations.
 * @num: The unsigned integer to be formatted and printed.
 */
void formatAndPrint(unsigned int num)
{
	unsigned int num1 = 2147484671;
	char output[100];

	formatAndPrint(num);

	sprintf(output, "%u", num1);
	printf("unsigned decimal integer: %s\n", output);

	sprintf(output, "%o", num1);
	printf("Unsigned octal integer: %s\n", output);

	sprintf(output, "%x", num1);
	printf("Unsigned hexadecimal integer(lowercase): %s\n", output);

	sprintf(output, "%X", num1);
	printf("Unsigned hexadecimal integer(uppercase): %s\n", output);
}
