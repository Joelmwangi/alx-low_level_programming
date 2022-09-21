#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed 
 *
 */

void rev_string(char *s)
{
	int i, tmp, len = _string(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i -1) = tmp;
	}

}

/**
 * _strn - returns thr length of a string 
 * @s: string 
 *
 * Return: thr length of the given string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}

