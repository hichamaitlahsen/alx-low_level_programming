#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if a letter is upper
 *@x:The number to be checked
 * Return: 1 if is upper and 0 if not
 */
int _isupper(int x)
{
	if(x>=65 && x<=98)
	{
		return (1);
	}
	return (0);
}
