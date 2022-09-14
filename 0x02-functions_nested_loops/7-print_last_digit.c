 #include "main.h"

/**
 * print _last_digit -prints the last line of a number
 * @n: The number in question.
 *
 * Return: value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 10)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
