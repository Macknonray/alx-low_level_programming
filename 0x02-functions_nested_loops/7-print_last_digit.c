#include "main.h"


/**
 * print_last_digit - this is the entry point
 *
 * Description: its prints the last number
 *
 * @a:compute the last digit
 *
 * Return: used to return the last value
 */


int print_last_digit(int a)
{
	int last_digit;


	last_digit = a % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}

