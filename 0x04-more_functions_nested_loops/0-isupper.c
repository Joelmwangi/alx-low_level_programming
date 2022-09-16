#include "main.h"

/**
 *_isupper - checks whether a  character is a digit or not
 *@c: tested character
 *Return: 1 whether it is, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);

}
