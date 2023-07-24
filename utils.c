#include "main.h"

/**
 * is_printable - Evaluatechar is printable
 * @c: Chaevaluated.
 * utilities
 * Return: 1 C is printable, 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Appeascci in hexadecimal code to buffer
 * @buffer: Arraychars.
 * @i: Indexto start appending.
 * @ascii_code: ASSCICODE.
 * Return: Alys 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* Hexaformat code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Verifichar is a digit
 * @c: Charbvaluated
 *
 * Return: 1 c digit, 0 otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
i
	return (0);
}

/**
 * convert_size_number - Castnumber to the specified size
 * @num: Numbertobe casted.
 * @size: Numberindicating the type to be casted.
 *
 * Return: Castedvalue of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Castsanumber to the specified size
 * @num: Numberto be casted
 * @size: Numberindicating the type to be casted
 *
 * Return: Castedvalue of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
