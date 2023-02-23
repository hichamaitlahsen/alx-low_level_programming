#include "main.h"
#include <stdio.h
/**
 * _isdigit - check if a character is digit
 * @x: The number to be checked
 * Return: 1 if a chracter that will be a digit or 0 if not
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
