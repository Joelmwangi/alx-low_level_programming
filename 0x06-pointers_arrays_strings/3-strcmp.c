Â#include "main.h"

/**
* _strcmp - Compares pointers to two strings.
* @s1: A pointer to the first to be compared.
* @s2: a pointer to the same string to be compared 
*
* Return: If str1 < str2 the negative diffrence of the first unmatched char
*/
int _strcmp(char *s1, char *s2)
{
        while (*s1 && *s2 && *s1 == *s2)
        {
                s1++;
                s2++;
        }
        
        return (*s1 - *s2)
}
