#include "main.h"

/**
 * largest_number - returns the largest 0f 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * return: largest number
 */

int largest-number(int a, int b, int c)
{
int largest;
if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
